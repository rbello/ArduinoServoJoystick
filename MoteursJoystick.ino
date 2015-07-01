#include <Servo.h>

Servo servoX;
Servo servoY;

const int xPin = A0;
const int yPin = A1;
const int swPin = 13;

void setup() { 
  pinMode(swPin, INPUT);
  digitalWrite(swPin, HIGH);
  servoX.attach(9);
  servoY.attach(5);
  Serial.begin(9600);
} 

void loop() {
  
  int x = analogRead(xPin);
  int y = analogRead(yPin);
  int push = digitalRead(swPin);

  // Axe X
  if (x > 600) {
    servoX.write(180);
  }
  else if (x < 450) {
    servoX.write(0);
  }
  else {
    servoX.write(58);
  }

  // Axe Y
  if (y > 600) {
    servoY.write(180);
  }
  else if (y < 450) {
    servoY.write(0);
  }
  else {
    servoY.write(1516);
  }
  
}
