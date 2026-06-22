
#include <Servo.h>
int pos = 0;
Servo myServo;

int trigPin = 2;
int echoPin = 3;

long duration;
float distance;

int thresholdFar = 20;
int thresholdClose = 15;

const int Green = 8;
const int Yellow = 9;
const int Red = 10;

void setup() {
  Serial.begin(9600);
  myServo.attach(7);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(Green, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Red, OUTPUT);
}

void loop() {
  for(pos = 0; pos <= 180; pos += 1){
    myServo.write(pos);
    delay(10);
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);

    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH,30000);
    distance = duration * 0.034 / 2;

    Serial.print(pos);
    Serial.print(" , ");
    Serial.println(distance);

    digitalWrite(Green, LOW);
    digitalWrite(Yellow, LOW);
    digitalWrite(Red, LOW);

    if (distance > thresholdFar){
      digitalWrite(Green, HIGH);
      digitalWrite(Yellow, LOW);
      digitalWrite(Red, LOW);
    }
    else if (distance > thresholdClose){
      digitalWrite(Green, LOW);
      digitalWrite(Yellow, HIGH);
      digitalWrite(Red, LOW);
    }
    else {
      digitalWrite(Green, LOW);
      digitalWrite(Yellow, LOW);
      digitalWrite(Red, HIGH);
    }
  }

  for(pos = 180; pos>= 0; pos -= 1){
    myServo.write(pos);
    delay(10);
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);

    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH, 30000);
    distance = duration * 0.034 / 2;
    Serial.print(pos);
    Serial.print(" , ");
    Serial.println(distance);

    digitalWrite(Green, LOW);
    digitalWrite(Yellow, LOW);
    digitalWrite(Red, LOW);

    if (distance > thresholdFar){
      digitalWrite(Green, HIGH);
      digitalWrite(Yellow, LOW);
      digitalWrite(Red, LOW);
    }
    else if (distance > thresholdClose){
      digitalWrite(Green, LOW);
      digitalWrite(Yellow, HIGH);
      digitalWrite(Red, LOW);
    }
    else {
      digitalWrite(Green, LOW);
      digitalWrite(Yellow, LOW);
      digitalWrite(Red, HIGH);
    }
  }

}
