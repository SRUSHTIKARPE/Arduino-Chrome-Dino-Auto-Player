#include <Servo.h>

Servo myServo;

const int ldrPin = A0;
const int servoPin = 9;
const int threshold = 470;

unsigned long lastJump = 0;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  myServo.write(0);
}

void loop() {
  int ldrValue = analogRead(ldrPin);

  if (ldrValue < threshold && millis() - lastJump > 150) {

    Serial.println("OBSTACLE!");

    lastJump = millis();

    myServo.write(70);
    delay(70);
    myServo.write(0);
  }

  delay(5);
}