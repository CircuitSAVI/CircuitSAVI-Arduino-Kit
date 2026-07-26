# Project 01: Ultrasonic Radar System

## 📋 Components Required
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Jumper Wires & Breadboard

---

##  Direct Wiring Connections

### 1. HC-SR04 Ultrasonic Sensor -> Arduino
* VCC (Sensor) ➔ 5V (Arduino)
* GND(Sensor) ➔ GND (Arduino)
* Trig (Sensor) ➔ Pin 9 (Arduino)
* Echo(Sensor) ➔ Pin 10 (Arduino)

### 2. SG90 Servo Motor -> Arduino
* Red Wire (Power) ➔ 5V (Arduino)
* Brown / Black Wire (Ground) ➔ GND (Arduino)
* Yellow / Orange Wire (Signal) ➔ Pin 11(Arduino)

---

##  How to Run Code
1. Open `code.ino` in Arduino IDE.
2. Go to Tools ➔ Board and select Arduino Uno.
3. Select the correct COM Port in Tools ➔ Port.
4. Click Upload.
5. Open Serial Monitor (Ctrl + Shift + M) at 9600 baud rate to view real-time radar angle and distance output.
