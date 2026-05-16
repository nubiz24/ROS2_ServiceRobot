/*
 * Auto-tune PID (relay + Ziegler-Nichols PI) tren MOTOR THAT
 *
 * Encoder: neu ban noi day encoder TRAI/PHAI nham voi config.yaml, chi SUA O DAY:
 *   - TUNE_LEFT:  encoder A/B = 13, 12 (cap vat ly gan motor trai)
 *   - TUNE_RIGHT: encoder A/B = 11, 10 (cap vat ly gan motor phai)
 * Driver (ENA/ENB, IN1/IN2) giu nhu config: trai 42/40/41, phai 37/39/38.
 *
 * Cách dùng:
 *  - ESP32-S3, Serial 115200, nâng xe / an toàn
 *  - Copy kp/ki vao motor.left.driver.pid / motor.right.driver.pid trong config.yaml
 *
 * Mặc định tune bánh TRÁI. Đổi TUNE_LEFT_MOTOR=0, TUNE_RIGHT_MOTOR=1 de tune phải.
 *
 * INVERT_RPM_FOR_ERROR: neu encoder dem nguoc chieu motor (rpm am khi tien),
 * dat = 1 de doi dau RPM khi tinh loi relay — tranh e luon cung dau, khong zero-crossing.
 */

#include <Arduino.h>
#include <math.h>

#ifndef PI
#define PI 3.14159265f
#endif

// ========== Chọn motor cần tune (chỉ bật đúng 1) ==========
#define TUNE_LEFT_MOTOR 0
#define TUNE_RIGHT_MOTOR 1

#if (TUNE_LEFT_MOTOR && TUNE_RIGHT_MOTOR) || (!TUNE_LEFT_MOTOR && !TUNE_RIGHT_MOTOR)
#error "Chi bat mot: TUNE_LEFT_MOTOR=1 XOR TUNE_RIGHT_MOTOR=1"
#endif

// 1 = dung -rpm_filt khi tinh e = target - measured (relay + zero-crossing)
#ifndef INVERT_RPM_FOR_ERROR
#define INVERT_RPM_FOR_ERROR 0
#endif

// ========== Driver = config.yaml; encoder = cap vat ly sau khi noi nham trai/phai ==========
#if TUNE_LEFT_MOTOR
static const int PIN_EN = 42;
static const int PIN_IN1 = 40;
static const int PIN_IN2 = 41;
static const int PIN_ENC_A = 13;
static const int PIN_ENC_B = 12;
static const uint8_t PWM_CH = 0;
#elif TUNE_RIGHT_MOTOR
static const int PIN_EN = 37;
static const int PIN_IN1 = 39;
static const int PIN_IN2 = 38;
static const int PIN_ENC_A = 11;
static const int PIN_ENC_B = 10;
static const uint8_t PWM_CH = 1;
#endif

static const float MOTOR_ENCODER_PPR = 990.0f;
static const uint8_t TICKS_PER_PULSE = 4;
static const uint16_t PWM_FREQ_HZ = 5000;
static const uint8_t PWM_BITS = 8;

// Relay: hai mức duty (0–255) — chênh lệch càng lớn dao động càng rõ (cẩn thận nóng L298)
static const uint8_t RELAY_HIGH_DUTY = 240;
static const uint8_t RELAY_LOW_DUTY  = 50;

static const float TARGET_RPM = 91.0f;
static const unsigned long RELAY_PHASE_MS = 45000;
static const unsigned long SAMPLE_MS = 10;

static const float PID_SAMPLE_PERIOD_SEC = 0.03f;

struct PIResult {
  float kp;
  float ki;
  bool ok;
};

volatile long encoder_count = 0;
static long enc_prev = 0;
static unsigned long last_rpm_us = 0;
static float encoder_tpr;
static float ticks_per_us_to_rpm;

static float s_err_prev = 0;
static bool s_err_initialized = false;
static unsigned long s_t_prev_cross_us = 0;
static float s_sum_half_period_us = 0;
static int s_cross_count = 0;

void IRAM_ATTR isrEncA() {
  uint8_t a = digitalRead(PIN_ENC_A);
  uint8_t b = digitalRead(PIN_ENC_B);
  encoder_count += (a != b) ? 1 : -1;
}

void IRAM_ATTR isrEncB() {
  uint8_t a = digitalRead(PIN_ENC_A);
  uint8_t b = digitalRead(PIN_ENC_B);
  encoder_count += (a == b) ? 1 : -1;
}

static void pwmAttach(uint8_t pin, uint8_t channel) {
#if ESP_IDF_VERSION_MAJOR >= 5
  if (!ledcAttachChannel(pin, PWM_FREQ_HZ, PWM_BITS, channel)) {
    Serial.println("ledcAttachChannel failed");
  }
#else
  ledcSetup(channel, PWM_FREQ_HZ, PWM_BITS);
  ledcAttachPin(pin, channel);
#endif
}

void motorStopCoast() {
  digitalWrite(PIN_IN1, LOW);
  digitalWrite(PIN_IN2, LOW);
  ledcWrite(PWM_CH, 0);
}

void motorForwardDuty(uint8_t duty) {
  digitalWrite(PIN_IN1, HIGH);
  digitalWrite(PIN_IN2, LOW);
  ledcWrite(PWM_CH, duty);
}

static void resetRelayStats() {
  s_err_prev = 0;
  s_err_initialized = false;
  s_t_prev_cross_us = 0;
  s_sum_half_period_us = 0;
  s_cross_count = 0;
}

/** duty relay theo lỗi RPM */
uint8_t relayDuty(float target_rpm, float measured_rpm) {
  float e = target_rpm - measured_rpm;
  return (e >= 0.0f) ? RELAY_HIGH_DUTY : RELAY_LOW_DUTY;
}

void onErrorSample(float target_rpm, float measured_rpm) {
  float e = target_rpm - measured_rpm;
  unsigned long now = micros();

  if (!s_err_initialized) {
    s_err_prev = e;
    s_t_prev_cross_us = now;
    s_err_initialized = true;
    return;
  }

  if ((s_err_prev > 0 && e <= 0) || (s_err_prev < 0 && e >= 0)) {
    if (s_cross_count < 200) {
      float half = (float)(now - s_t_prev_cross_us);
      if (half > 2000.0f) {
        s_sum_half_period_us += half;
        s_cross_count++;
      }
    }
    s_t_prev_cross_us = now;
  }
  s_err_prev = e;
}

/**
 * d: nửa biên độ relay chuẩn hoá 0..1 (so với full scale PWM)
 * Ku ước lượng cổ điển cho relay; có thể chỉnh thực nghiệm sau.
 */
PIResult computeZN_PI_FromRelay(float period_sec) {
  PIResult r = {0, 0, false};
  if (s_cross_count < 4) {
    return r;
  }
  float avg_half_us = s_sum_half_period_us / (float)s_cross_count;
  float Tu_sec = (avg_half_us * 2.0f) * 1e-6f;

  if (Tu_sec < 1e-3f || Tu_sec > 10.0f) {
    return r;
  }

  float d_norm =
      ((float)RELAY_HIGH_DUTY - (float)RELAY_LOW_DUTY) * 0.5f / 255.0f;
  float Ku = 4.0f * d_norm / (PI * fmaxf(0.001f, Tu_sec));

  float Kp = 0.45f * Ku;
  float Ki_continuous = 0.54f * Ku / Tu_sec;
  float Ki_discrete = Ki_continuous * period_sec;

  r.kp = Kp;
  r.ki = Ki_discrete;
  r.ok = true;
  return r;
}

// ========== State machine ==========
enum { ST_RELAY, ST_DONE, ST_FINISHED };

void setup() {
  Serial.begin(115200);
  delay(400);

  encoder_tpr = TICKS_PER_PULSE * MOTOR_ENCODER_PPR;
  ticks_per_us_to_rpm = (1e6f * 60.0f) / encoder_tpr;

  pinMode(PIN_IN1, OUTPUT);
  pinMode(PIN_IN2, OUTPUT);
  pinMode(PIN_ENC_A, INPUT);
  pinMode(PIN_ENC_B, INPUT);

  pwmAttach(PIN_EN, PWM_CH);
  attachInterrupt(digitalPinToInterrupt(PIN_ENC_A), isrEncA, CHANGE);
  attachInterrupt(digitalPinToInterrupt(PIN_ENC_B), isrEncB, CHANGE);

  motorStopCoast();

  Serial.println();
  Serial.println(F("=== Auto-tune PID (relay + ZN) — MOTOR THAT ==="));
  Serial.print(F("Target RPM: "));
  Serial.println(TARGET_RPM, 1);
  Serial.print(F("Relay phase: "));
  Serial.print(RELAY_PHASE_MS / 1000);
  Serial.println(F(" s"));
  Serial.print(F("INVERT_RPM_FOR_ERROR: "));
  Serial.println(INVERT_RPM_FOR_ERROR ? "1 (doi dau RPM cho loi)" : "0");
  Serial.println(F("Bat dau sau 2s... (nang xe / an toan)"));
  delay(2000);

  resetRelayStats();
  enc_prev = encoder_count;
  last_rpm_us = micros();
}

static int st = ST_RELAY;
static unsigned long t_phase_start = 0;
static float rpm_filt = 0;

void loop() {
  static unsigned long last_sample_ms = 0;
  unsigned long ms = millis();

  if (st == ST_FINISHED) {
    motorStopCoast();
    delay(200);
    return;
  }

  if (st == ST_DONE) {
    motorStopCoast();
    st = ST_FINISHED;
    return;
  }

  if (st == ST_RELAY) {
    if (t_phase_start == 0) {
      t_phase_start = ms;
      Serial.println(F("Relay dang chay..."));
    }

    if (ms - last_sample_ms < SAMPLE_MS) {
      delay(1);
      return;
    }
    last_sample_ms = ms;

    unsigned long now_us = micros();
    long enc_now = encoder_count;
    unsigned long dt_us = now_us - last_rpm_us;
    last_rpm_us = now_us;
    if (dt_us < 500) dt_us = 500;

    long d_enc = enc_now - enc_prev;
    enc_prev = enc_now;

    float rpm_inst = ((float)d_enc / (float)dt_us) * ticks_per_us_to_rpm;
    rpm_filt = rpm_filt * 0.5f + rpm_inst * 0.5f;

    float rpm_for_error = INVERT_RPM_FOR_ERROR ? -rpm_filt : rpm_filt;

    uint8_t duty = relayDuty(TARGET_RPM, rpm_for_error);
    motorForwardDuty(duty);
    onErrorSample(TARGET_RPM, rpm_for_error);

    static unsigned long last_log = 0;
    if (ms - last_log > 200) {
      last_log = ms;
      Serial.print(F("rpm_raw="));
      Serial.print(rpm_filt, 1);
      Serial.print(F(" rpm_err="));
      Serial.print(rpm_for_error, 1);
      Serial.print(F(" duty="));
      Serial.println(duty);
    }

    if (ms - t_phase_start >= RELAY_PHASE_MS) {
      motorStopCoast();
      PIResult res = computeZN_PI_FromRelay(PID_SAMPLE_PERIOD_SEC);
      Serial.println();
      Serial.println(F("=== Ket qua (gan vao motor.<L/R>.driver.pid trong config.yaml) ==="));
      if (res.ok) {
        Serial.print(F("kp: "));
        Serial.println(res.kp, 6);
        Serial.print(F("ki: "));
        Serial.println(res.ki, 6);
        Serial.print(F("period: "));
        Serial.println(PID_SAMPLE_PERIOD_SEC, 3);
        Serial.println(F("kd: 0"));
        Serial.println(F("kpm: 0"));
      } else {
        Serial.println(F("Khong du zero-crossing. Kiem tra encoder, tang RELAY_PHASE_MS hoac doi TARGET_RPM / RELAY_*_DUTY."));
      }
      Serial.println(F("Hoan tat. Dung motor."));
      st = ST_DONE;
    }
  }
}
