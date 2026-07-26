#  Project 02: Autonomous Line Follower Car

## 📋 Components Required
- Arduino Uno
- L298N Motor Driver Module
- 2x IR Proximity Sensors
- 2x BO Motors with Wheels
- 7.4V / 12V Battery Pack
- Robot Chassis & Jumper Wires

---

## 📌 Direct Wiring Connections

### 1. Left IR Sensor ➔ Arduino
* VCC ➔ 5V (Arduino)
* GND ➔ GND (Arduino)
* OUT ➔ Pin A0 (Arduino)

### 2. Right IR Sensor ➔ Arduino
* VCC ➔ 5V(Arduino)
* GND ➔ GND (Arduino)
* OUT ➔ Pin A1 (Arduino)

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

---

## 🚀 How to Run Code
1. Open `code.ino` in **Arduino IDE**.
2. Go to Tools ➔ Board and select Arduino Uno.
3. Select the correct COM Port in Tools ➔ Port.
4. Click Upload.
5. Adjust the potentiometer knobs on both IR sensors using a small screwdriver so that the onboard LEDs turn ON over black surface and OFF over white surface.
