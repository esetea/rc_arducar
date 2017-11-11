#include <SoftwareSerial.h>

SoftwareSerial HC06_BT1(1,0); // RX,TX

const int hcsr04_echoPin = 6;
const int hcsr04_trigPin = 7;
const int buzzerPin = 12;

long duration;
int distance;

void setup() {
  pinMode(hcsr04_echoPin, INPUT);
  pinMode(hcsr04_trigPin, OUTPUT);
  pinMode(buzzer, OUTPUT)
}

void loop() {

}

void _roomba_mode() {
  // Clears the the trig pin
  digitalWrite(hcsr04_trigPin, LOW);
  delayMicroseconds(2);

  // Reads de echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculates the distance (cms)
  distance = duration * 0.034 / 2;
  if (distance <= 5) {
    digitalWrite(buzzerPin, HIGH);
  }
  else {
    digitalWrite(buzzerPin, LOW);
  }
}
