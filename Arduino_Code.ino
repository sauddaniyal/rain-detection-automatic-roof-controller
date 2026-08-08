#include <Servo.h>

const int RAIN_PIN   = 7;
const int SERVO_PIN  = 9;
const int BUZZER_PIN = 8;
const int BTN_PIN    = 4;

Servo coverServo;

bool manualMode = false;
bool lastBtnState = HIGH;
bool rainAlertPlayed = false;
bool dryAlertPlayed = false;

void setup() {
  pinMode(RAIN_PIN,   INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(BTN_PIN,    INPUT_PULLUP);
  coverServo.attach(SERVO_PIN);
  coverServo.write(0);
  Serial.begin(9600);
}

void loop() {
  // ── Button check (manual override) ──
  bool btnState = digitalRead(BTN_PIN);
  if (btnState == LOW && lastBtnState == HIGH) {
    manualMode = !manualMode;
    delay(200);
    if (manualMode) {
      Serial.println("MANUAL MODE — roof closing");
      coverServo.write(90);
      tone(BUZZER_PIN, 1000, 300);
    } else {
      Serial.println("AUTO MODE — returning to sensor");
      coverServo.write(0);
    }
  }
  lastBtnState = btnState;

  // ── Auto mode (rain sensor) ──
  if (!manualMode) {
    int rain = digitalRead(RAIN_PIN);

    if (rain == LOW) {
      // Rain detected
      coverServo.write(90);
      Serial.println("Rain! Roof closing...");

      // Buzzer beeps for 5 seconds ONCE when rain starts
      if (!rainAlertPlayed) {
        tone(BUZZER_PIN, 1000);
        delay(5000);
        noTone(BUZZER_PIN);
        rainAlertPlayed = true;
        dryAlertPlayed = false;
      }

    } else {
      // No rain
      coverServo.write(0);
      Serial.println("Dry. Roof open.");

      // Buzzer beeps for 2 seconds ONCE when rain stops
      if (!dryAlertPlayed) {
        tone(BUZZER_PIN, 800);
        delay(2000);
        noTone(BUZZER_PIN);
        dryAlertPlayed = true;
        rainAlertPlayed = false;
      }
    }
  }

  delay(500);
}