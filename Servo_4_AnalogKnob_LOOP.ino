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
     for(pos = 0; pos <= 180; pos += 1){
    myServo.write(pos);
    delay(5);
  }
  delay(2);
}
