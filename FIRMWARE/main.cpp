#include <Servo.h>

Servo baseServo;
Servo shoulderServo;
Servo elbowServo;
Servo wristServo;
Servo clawServo;

void setup() {
  baseServo.attach(8);
  shoulderServo.attach(9);
  elbowServo.attach(10);
  wristServo.attach(11);
  clawServo.attach(12);

  baseServo.write(90);
  shoulderServo.write(90);
  elbowServo.write(90);
  wristServo.write(90);
  clawServo.write(0);
  delay(1000);
}

void loop() {
  baseServo.write(135);
  delay(800);
  
  shoulderServo.write(60);
  elbowServo.write(120);
  wristServo.write(45);
  delay(1000);

  clawServo.write(90);
  delay(800);

  shoulderServo.write(90);
  elbowServo.write(90);
  wristServo.write(90);
  delay(1000);

  baseServo.write(45);
  delay(1000);

  shoulderServo.write(60);
  delay(800);

  clawServo.write(0);
  delay(800);

  shoulderServo.write(90);
  baseServo.write(90);
  delay(2000);
}