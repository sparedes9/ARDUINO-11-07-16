#include <Servo.h>
Servo myServo;

const int analogInPin = A0;
int sensorValue = 0;
int pos = 0;

void setup() {
  Serial.begin(9600);
  myServo.attach(9);
}

void loop() {
  sensorValue = analogRead(analogInPin);

  Serial.print("Sensor = ");
  Serial.println(sensorValue);

  if (sensorValue >= 966) {
    myServo.write(180);

  } else if (sensorValue >= 909  && sensorValue < 966) {
    myServo.write(170);

  } else if (sensorValue >= 852  && sensorValue < 909) {
    myServo.write(160);

  } else if (sensorValue >= 795  && sensorValue < 852) {
    myServo.write(150);

  } else if (sensorValue >= 738  && sensorValue < 795) {
    myServo.write(140);

  } else if (sensorValue >= 681  && sensorValue < 738) {
    myServo.write(130);

  } else if (sensorValue >= 624  && sensorValue < 681) {
    myServo.write(120);

  } else if (sensorValue >= 567  && sensorValue < 624) {
    myServo.write(110);

  } else if (sensorValue >= 510  && sensorValue < 567) {
    myServo.write(90);

  } else if (sensorValue >= 453  && sensorValue < 510) {
    myServo.write(80);

  } else if (sensorValue >= 396  && sensorValue < 453) {
    myServo.write(70);

  } else if (sensorValue >= 339  && sensorValue < 396) {
    myServo.write(60);

  } else if (sensorValue >= 282  && sensorValue < 339) {
    myServo.write(50);

  } else if (sensorValue >= 225  && sensorValue < 282) {
    myServo.write(40);

  } else if (sensorValue >= 168  && sensorValue < 225) {
    myServo.write(30);

  } else if (sensorValue >= 111  && sensorValue < 168) {
    myServo.write(20);

  } else if (sensorValue >= 54  && sensorValue < 111) {
    myServo.write(10);

  } else {
    myServo.write(0);
  }
  delay(2);
}
