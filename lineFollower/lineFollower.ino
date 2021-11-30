#include<Servo.h>

Servo carServo;

void setup() {
  Serial.begin(9600);
  carServo.attach(9);
}

void loop() {
  int sensorValue=analogRead(0);
  Serial.println(sensorValue);
}
