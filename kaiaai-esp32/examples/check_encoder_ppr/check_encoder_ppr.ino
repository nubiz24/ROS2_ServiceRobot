/*
 * Check encoder PPR using the same quadrature counting logic as the firmware.
 *
 * Usage:
 *  1. Upload this sketch.
 *  2. Open Serial Monitor at 115200.
 *  3. Mark one wheel position, then rotate that wheel exactly 1 mechanical turn.
 *  4. Send 'z' before the turn to zero counts, then send 'p' after the turn.
 *
 * Firmware math for AB_QUAD:
 *   motorLeft.init(..., 4) / motorRight.init(..., 4)
 *   encoderTPR = 4 * motor.encoder.ppr
 *
 * So after exactly 1 wheel turn:
 *   measured_ticks ~= 3960  => config ppr ~= 990
 *   measured_ticks ~= 7920  => config ppr ~= 1980
 *   measured_ticks ~= 15840 => config ppr ~= 3960
 */

#include <Arduino.h>

// Pins match data/config.yaml.
static const int PIN_LEFT_ENC_A = 11;
static const int PIN_LEFT_ENC_B = 10;
static const int PIN_RIGHT_ENC_A = 13;
static const int PIN_RIGHT_ENC_B = 12;

// Firmware uses INPUT. If your encoder output is open-collector/noisy,
// change to INPUT_PULLUP for this test and keep notes separately.
#ifndef ENCODER_PIN_MODE
#define ENCODER_PIN_MODE INPUT
#endif

volatile long ticks_left = 0;
volatile long ticks_right = 0;

void IRAM_ATTR isrLeftA() {
  byte enc_a = digitalRead(PIN_LEFT_ENC_A);
  byte enc_b = digitalRead(PIN_LEFT_ENC_B);
  ticks_left += (enc_a != enc_b) ? 1 : -1;
}

void IRAM_ATTR isrLeftB() {
  byte enc_a = digitalRead(PIN_LEFT_ENC_A);
  byte enc_b = digitalRead(PIN_LEFT_ENC_B);
  ticks_left += (enc_a == enc_b) ? 1 : -1;
}

void IRAM_ATTR isrRightA() {
  byte enc_a = digitalRead(PIN_RIGHT_ENC_A);
  byte enc_b = digitalRead(PIN_RIGHT_ENC_B);
  ticks_right += (enc_a != enc_b) ? 1 : -1;
}

void IRAM_ATTR isrRightB() {
  byte enc_a = digitalRead(PIN_RIGHT_ENC_A);
  byte enc_b = digitalRead(PIN_RIGHT_ENC_B);
  ticks_right += (enc_a == enc_b) ? 1 : -1;
}

static void printCounts() {
  noInterrupts();
  long left = ticks_left;
  long right = ticks_right;
  interrupts();

  long abs_left = labs(left);
  long abs_right = labs(right);

  Serial.print(F("left ticks="));
  Serial.print(left);
  Serial.print(F(" abs="));
  Serial.print(abs_left);
  Serial.print(F(" ppr_if_one_turn="));
  Serial.print(abs_left / 4.0f, 1);

  Serial.print(F(" | right ticks="));
  Serial.print(right);
  Serial.print(F(" abs="));
  Serial.print(abs_right);
  Serial.print(F(" ppr_if_one_turn="));
  Serial.println(abs_right / 4.0f, 1);
}

static void zeroCounts() {
  noInterrupts();
  ticks_left = 0;
  ticks_right = 0;
  interrupts();
  Serial.println(F("Counts zeroed. Rotate exactly 1 wheel turn, then send 'p'."));
}

void setup() {
  Serial.begin(115200);
  delay(500);

  pinMode(PIN_LEFT_ENC_A, ENCODER_PIN_MODE);
  pinMode(PIN_LEFT_ENC_B, ENCODER_PIN_MODE);
  pinMode(PIN_RIGHT_ENC_A, ENCODER_PIN_MODE);
  pinMode(PIN_RIGHT_ENC_B, ENCODER_PIN_MODE);

  attachInterrupt(digitalPinToInterrupt(PIN_LEFT_ENC_A), isrLeftA, CHANGE);
  attachInterrupt(digitalPinToInterrupt(PIN_LEFT_ENC_B), isrLeftB, CHANGE);
  attachInterrupt(digitalPinToInterrupt(PIN_RIGHT_ENC_A), isrRightA, CHANGE);
  attachInterrupt(digitalPinToInterrupt(PIN_RIGHT_ENC_B), isrRightB, CHANGE);

  Serial.println();
  Serial.println(F("=== Encoder PPR check, firmware-compatible AB_QUAD x4 count ==="));
  Serial.println(F("Commands: z=zero, p=print, stream prints every 500 ms."));
  Serial.println(F("Config ppr = abs(ticks after 1 wheel turn) / 4."));
  zeroCounts();
}

void loop() {
  static unsigned long last_print_ms = 0;

  while (Serial.available() > 0) {
    char c = (char)Serial.read();
    if (c == 'z' || c == 'Z') {
      zeroCounts();
    } else if (c == 'p' || c == 'P') {
      printCounts();
    }
  }

  unsigned long now_ms = millis();
  if (now_ms - last_print_ms >= 500) {
    last_print_ms = now_ms;
    printCounts();
  }
}
