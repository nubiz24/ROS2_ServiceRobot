/*
 * Test đọc tốc độ 2 bánh (TRÁI + PHẢI) — chân khớp data/config.yaml (L298_EN + encoder AB)
 *
 * Board: ESP32-S3 (chọn đúng board trong Arduino IDE)
 *
 * TRÁI:
 *   ENA (PWM ch0): 42
 *   IN1: 40, IN2: 41
 *   Encoder A: 11, B: 10
 *
 * PHẢI:
 *   ENB (PWM ch1): 37
 *   IN1: 39, IN2: 38
 *   Encoder A: 13, B: 12
 *
 * L298N — QUAN TRONG:
 *   - GỠ JUMPER trên ENA và ENB nếu bạn nối PWM từ ESP vào ENA/ENB.
 *   - Nếu chỉ gỡ một bên, bên còn jumper có thể luôn FULL hoặc không điều khiển đúng.
 *
 * Encoder RPM = 0 thường do:
 *   - Dây encoder A/B sai chân hoặc encoder 5V cần chia áp / module 3.3V
 *   - Thử ENCODER_PIN_MODE = INPUT_PULLUP (mặc định) hoặc INPUT nếu encoder có kéo lên sẵn
 *
 * Công thức RPM: TPR = 4 * motor.encoder.ppr
 */

#include <Arduino.h>

#define USE_MOTOR_DRIVE 1

// Encoder: hầu hết encoder tích cực thấp cần pull-up nội bộ ESP
#ifndef ENCODER_PIN_MODE
#define ENCODER_PIN_MODE INPUT_PULLUP
#endif

// ----- TRÁI (config.yaml motor.left) -----
static const int PIN_LEFT_EN = 42;
static const int PIN_LEFT_IN1 = 40;
static const int PIN_LEFT_IN2 = 41;
static const int PIN_LEFT_ENC_A = 11;
static const int PIN_LEFT_ENC_B = 10;
static const uint8_t PWM_CH_LEFT = 0;

// ----- PHẢI (config.yaml motor.right) -----
static const int PIN_RIGHT_EN = 37;
static const int PIN_RIGHT_IN1 = 39;
static const int PIN_RIGHT_IN2 = 38;
static const int PIN_RIGHT_ENC_A = 13;
static const int PIN_RIGHT_ENC_B = 12;
static const uint8_t PWM_CH_RIGHT = 1;

static const float MOTOR_ENCODER_PPR = 990.0f;
static const uint8_t TICKS_PER_PULSE = 4;
static const uint16_t PWM_FREQ_HZ = 5000;
static const uint8_t PWM_BITS = 8;

static const unsigned long PRINT_INTERVAL_MS = 100;

static float encoder_tpr;
static float ticks_per_us_to_rpm;

volatile long encoder_count_left = 0;
volatile long encoder_count_right = 0;
static long enc_prev_left = 0;
static long enc_prev_right = 0;
static unsigned long last_print_ms = 0;
static unsigned long last_rpm_us = 0;

void IRAM_ATTR isrLeftA() {
  uint8_t a = digitalRead(PIN_LEFT_ENC_A);
  uint8_t b = digitalRead(PIN_LEFT_ENC_B);
  encoder_count_left += (a != b) ? 1 : -1;
}

void IRAM_ATTR isrLeftB() {
  uint8_t a = digitalRead(PIN_LEFT_ENC_A);
  uint8_t b = digitalRead(PIN_LEFT_ENC_B);
  encoder_count_left += (a == b) ? 1 : -1;
}

void IRAM_ATTR isrRightA() {
  uint8_t a = digitalRead(PIN_RIGHT_ENC_A);
  uint8_t b = digitalRead(PIN_RIGHT_ENC_B);
  encoder_count_right += (a != b) ? 1 : -1;
}

void IRAM_ATTR isrRightB() {
  uint8_t a = digitalRead(PIN_RIGHT_ENC_A);
  uint8_t b = digitalRead(PIN_RIGHT_ENC_B);
  encoder_count_right += (a == b) ? 1 : -1;
}

static void pwmAttach(uint8_t pin, uint8_t channel) {
#if ESP_IDF_VERSION_MAJOR >= 5
  if (!ledcAttachChannel(pin, PWM_FREQ_HZ, PWM_BITS, channel)) {
    Serial.print(F("LOI ledcAttachChannel pin="));
    Serial.println(pin);
  }
#else
  ledcSetup(channel, PWM_FREQ_HZ, PWM_BITS);
  ledcAttachPin(pin, channel);
#endif
}

static bool attachEncIRQ(int pin, void (*isr)(), const char *name) {
  if (digitalPinToInterrupt(pin) == NOT_AN_INTERRUPT) {
    Serial.print(F("LOI: GPIO "));
    Serial.print(pin);
    Serial.print(F(" khong ho tro interrupt ("));
    Serial.print(name);
    Serial.println(F(")"));
    return false;
  }
  attachInterrupt(digitalPinToInterrupt(pin), isr, CHANGE);
  return true;
}

void motorLeftStop() {
  digitalWrite(PIN_LEFT_IN1, LOW);
  digitalWrite(PIN_LEFT_IN2, LOW);
  ledcWrite(PWM_CH_LEFT, 0);
}

void motorRightStop() {
  digitalWrite(PIN_RIGHT_IN1, LOW);
  digitalWrite(PIN_RIGHT_IN2, LOW);
  ledcWrite(PWM_CH_RIGHT, 0);
}

void motorLeftForward(uint8_t duty) {
  digitalWrite(PIN_LEFT_IN1, HIGH);
  digitalWrite(PIN_LEFT_IN2, LOW);
  ledcWrite(PWM_CH_LEFT, duty);
}

void motorRightForward(uint8_t duty) {
  digitalWrite(PIN_RIGHT_IN1, HIGH);
  digitalWrite(PIN_RIGHT_IN2, LOW);
  ledcWrite(PWM_CH_RIGHT, duty);
}

void setup() {
  Serial.begin(115200);
  delay(500);

  encoder_tpr = TICKS_PER_PULSE * MOTOR_ENCODER_PPR;
  ticks_per_us_to_rpm = (1e6f * 60.0f) / encoder_tpr;

  pinMode(PIN_LEFT_IN1, OUTPUT);
  pinMode(PIN_LEFT_IN2, OUTPUT);
  pinMode(PIN_RIGHT_IN1, OUTPUT);
  pinMode(PIN_RIGHT_IN2, OUTPUT);

  pinMode(PIN_LEFT_ENC_A, ENCODER_PIN_MODE);
  pinMode(PIN_LEFT_ENC_B, ENCODER_PIN_MODE);
  pinMode(PIN_RIGHT_ENC_A, ENCODER_PIN_MODE);
  pinMode(PIN_RIGHT_ENC_B, ENCODER_PIN_MODE);

  pwmAttach(PIN_LEFT_EN, PWM_CH_LEFT);
  pwmAttach(PIN_RIGHT_EN, PWM_CH_RIGHT);

  bool okL = attachEncIRQ(PIN_LEFT_ENC_A, isrLeftA, "L-A") &&
             attachEncIRQ(PIN_LEFT_ENC_B, isrLeftB, "L-B");
  bool okR = attachEncIRQ(PIN_RIGHT_ENC_A, isrRightA, "R-A") &&
             attachEncIRQ(PIN_RIGHT_ENC_B, isrRightB, "R-B");

  motorLeftStop();
  motorRightStop();

  Serial.println();
  Serial.println(F("=== Test motor TRAI + PHAI (RPM encoder) ==="));
  Serial.println(F("L298: go jumper ENA+ENB neu dung PWM tu ESP len 2 chan enable."));
  Serial.print(F("Encoder pin mode: "));
  Serial.println(ENCODER_PIN_MODE == INPUT_PULLUP ? "INPUT_PULLUP" : "INPUT");
  Serial.print(F("IRQ encoder L: "));
  Serial.print(okL ? "OK" : "FAIL");
  Serial.print(F(" | R: "));
  Serial.println(okR ? "OK" : "FAIL");
  Serial.print(F("PPR="));
  Serial.print(MOTOR_ENCODER_PPR, 0);
  Serial.print(F(" TPR="));
  Serial.println(encoder_tpr, 0);

  last_rpm_us = micros();
  last_print_ms = millis();
}

void loop() {
  unsigned long now_ms = millis();
  unsigned long now_us = micros();

  uint8_t duty_print = 0;
#if USE_MOTOR_DRIVE
  static uint8_t demo_duty = 128;
  static unsigned long t0 = 0;
  if (t0 == 0) t0 = now_ms;
  if (now_ms - t0 > 3000) {
    t0 = now_ms;
    demo_duty = (uint8_t)((demo_duty + 64) & 0xFF);
    if (demo_duty == 0) demo_duty = 64;
  }
  duty_print = demo_duty;
  motorLeftForward(demo_duty);
  motorRightForward(demo_duty);
#else
  motorLeftStop();
  motorRightStop();
#endif

  if (now_ms - last_print_ms >= PRINT_INTERVAL_MS) {
    last_print_ms = now_ms;

    long eL = encoder_count_left;
    long eR = encoder_count_right;
    unsigned long dt_us = now_us - last_rpm_us;
    last_rpm_us = now_us;
    if (dt_us < 1000) dt_us = 1000;

    long dL = eL - enc_prev_left;
    long dR = eR - enc_prev_right;
    enc_prev_left = eL;
    enc_prev_right = eR;

    float rpmL = ((float)dL / (float)dt_us) * ticks_per_us_to_rpm;
    float rpmR = ((float)dR / (float)dt_us) * ticks_per_us_to_rpm;

    Serial.print(F("duty="));
    Serial.print(duty_print);
    Serial.print(F(" | L enc="));
    Serial.print(eL);
    Serial.print(F(" d="));
    Serial.print(dL);
    Serial.print(F(" rpm="));
    Serial.print(rpmL, 2);
    Serial.print(F(" || R enc="));
    Serial.print(eR);
    Serial.print(F(" d="));
    Serial.print(dR);
    Serial.print(F(" rpm="));
    Serial.println(rpmR, 2);
  }
}
