#  Project 02: Autonomous Obstacle Avoiding Car

## 📋 Components Required
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- L298N Motor Driver Module
- 2x BO Motors with Wheels
- 7.4V / 12V Battery Pack
- Robot Chassis & Jumper Wires


## 📌 Direct Wiring Connections

### 1. Ultrasonic Sensor ➔ Arduino
* VCC ➔ 5V (Arduino)
* GND ➔ GND (Arduino)
* Trig ➔ Pin A0 (Arduino)
* Echo ➔ Pin A1 (Arduino)

### 2. Servo Motor ➔ Arduino
* Brown Wire (GND) ➔ GND (Arduino)
* Red Wire (VCC) ➔ 5V (Arduino)
* Orange Wire (Signal) ➔ Pin 9 (Arduino)

### 3. L298N Motor Driver ➔ Arduino
* IN1 ➔ Pin 2 (Arduino)
* IN2 ➔ Pin 3 (Arduino)
* IN3 ➔ Pin 4 (Arduino)
* IN4 ➔ Pin 5 (Arduino)
* GND ➔ GND (Arduino - Common Ground)

### 4. Power & Motors ➔ L298N Driver
* Battery (+) Positive Wire ➔ 12V Terminal (L298N)
* Battery (-) Negative Wire ➔ GND Terminal (L298N)
* Left Motor Wires ➔ OUT1 & OUT2 Terminals (L298N)
* Right Motor Wires ➔ OUT3 & OUT4 Terminals (L298N)


## 🚀 How to Run Code
1. Open `code.ino` in **Arduino IDE**.
2. Go to Tools ➔ Board and select Arduino Uno.
3. Select the correct COM Port in Tools ➔ Port.
4. Click Upload.
5. Place the car on the floor and turn on the battery power switch. The car will navigate autonomously, dodging obstacles!
