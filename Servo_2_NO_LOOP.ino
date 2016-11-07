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

  if (sensorValue >= 900) {
    myServo.write(180);

  } else if (sensorValue >= 800  && sensorValue < 900) {
    myServo.write(160);

  } else if (sensorValue >= 700  && sensorValue < 800) {
    myServo.write(140);

  } else if (sensorValue >= 600  && sensorValue < 700) {
    myServo.write(120);

  } else if (sensorValue >= 500  && sensorValue < 600) {
    myServo.write(100);

  } else if (sensorValue >= 400  && sensorValue < 500) {
    myServo.write(80);

  } else if (sensorValue >= 300  && sensorValue < 400) {
    myServo.write(60);

  } else if (sensorValue >= 200  && sensorValue < 300) {
    myServo.write(40);

  } else if (sensorValue >= 100  && sensorValue < 200) {
    myServo.write(20);

  } else {
    myServo.write(0);
  }
  delay(2);
}
