#include <Servo.h>

const int trigPin = 10;
const int echoPin = 11;
long duration;
int distance;

Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  myServo.attach(12);
}

void loop() {
  // چرخش از 15 تا 165 درجه
  for (int i = 15; i <= 165; i += 3) {  // گام 3 درجه
    myServo.write(i);
    delay(15);  // حرکت نرم‌تر و سریع‌تر
    distance = calculateDistance();
    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }

  // چرخش از 165 تا 15 درجه
  for (int i = 165; i >= 15; i -= 3) {
    myServo.write(i);
    delay(15);
    distance = calculateDistance();
    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }
}

int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 20000); // محدود کردن انتظار به 20ms
  if (duration == 0) return -1;  // در صورت عدم دریافت پالس
  distance = duration * 0.034 / 2;
  return distance;
}
