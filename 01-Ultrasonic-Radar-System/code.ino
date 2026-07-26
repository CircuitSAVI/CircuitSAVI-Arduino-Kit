#include <Servo.h>

// Pin Definitions
const int TRIG_PIN = 9;
const int ECHO_PIN = 10;
const int SERVO_PIN = 11;

Servo radarServo;

// Variables for distance calculation
long duration;
int distance;

// Function to calculate distance using Ultrasonic Sensor
int calculateDistance() {
  // Clear the TRIG_PIN
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  
  // Set TRIG_PIN HIGH for 10 microseconds
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Read ECHO_PIN, returns travel time in microseconds
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculate distance in cm (Speed of sound = 0.034 cm/us)
  distance = duration * 0.034 / 2;
  return distance;
}

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  
  radarServo.attach(SERVO_PIN);
  Serial.begin(9600); // Serial monitor baud rate
}

void loop() {
  // Rotate servo from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle += 2) {
    radarServo.write(angle);
    delay(30);
    
    distance = calculateDistance();
    
    // Print Angle and Distance to Serial Monitor
    Serial.print("Angle: ");
    Serial.print(angle);
    Serial.print(" deg | Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }
  
  // Rotate servo back from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle -= 2) {
    radarServo.write(angle);
    delay(30);
    
    distance = calculateDistance();
    
    // Print Angle and Distance to Serial Monitor
    Serial.print("Angle: ");
    Serial.print(angle);
    Serial.print(" deg | Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }
}
