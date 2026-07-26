// Motor Driver L298N Control Pins
const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 5;

// IR Sensor Inputs
const int LEFT_IR = A0;
const int RIGHT_IR = A1;

void setup() {
  // Set motor control pins as outputs
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Set IR sensor pins as inputs
  pinMode(LEFT_IR, INPUT);
  pinMode(RIGHT_IR, INPUT);
}

void loop() {
  int leftVal = digitalRead(LEFT_IR);
  int rightVal = digitalRead(RIGHT_IR);

  // Both sensors on white background -> Move Forward
  if (leftVal == LOW && rightVal == LOW) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }
  // Left sensor hits black line -> Turn Left
  else if (leftVal == HIGH && rightVal == LOW) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }
  // Right sensor hits black line -> Turn Right
  else if (leftVal == LOW && rightVal == HIGH) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }
  // Both sensors hit black line / Off-track -> Stop
  else {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }
}
