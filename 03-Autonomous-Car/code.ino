#include <Servo.h>

// Ultrasonic Sensor Pins
const int TRIG_PIN = A0;
const int ECHO_PIN = A1;

// Motor Driver L298N Pins
const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 5;

Servo servoRadar;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  servoRadar.attach(9);
  servoRadar.write(90); // Look forward
  delay(1000);
}

long getDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  long duration = pulseIn(ECHO_PIN, HIGH);
  return duration * 0.034 / 2;
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void stopCar() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop() {
  long distance = getDistance();

  if (distance > 20 || distance == 0) {
    moveForward();
  } else {
    stopCar();
    delay(200);
    moveBackward();
    delay(300);
    stopCar();

    // Scan Right
    servoRadar.write(30);
    delay(500);
    long rightDistance = getDistance();

    // Scan Left
    servoRadar.write(150);
    delay(500);
    long leftDistance = getDistance();

    // Reset Servo Position
    servoRadar.write(90);
    delay(300);

    if (rightDistance > leftDistance) {
      turnRight();
      delay(400);
    } else {
      turnLeft();
      delay(400);
    }
    stopCar();
  }
}
