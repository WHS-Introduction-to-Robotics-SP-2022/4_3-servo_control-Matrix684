#include <Servo.h>

int Pin=9;

Servo myservo;

void setup() {
myservo.attach(Pin);
}

void loop() {
  myservo.write(33);
  delay(1000);
  myservo.write(98);
  delay(1000);
  myservo.write(170);
  delay(1000);
}
