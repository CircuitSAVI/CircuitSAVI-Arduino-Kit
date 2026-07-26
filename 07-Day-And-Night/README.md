#  Project 07: Day and Night Smart Light System

## 📋 Components Required
- Arduino Uno
- LDR (Light Dependent Resistor) Module / Sensor
- 1x LED (Any color)
- 1x 220 Ohm Resistor
- Jumper Wires and Breadboard


##  Direct Wiring Connections

### 1. LDR Sensor -> Arduino
* VCC -> 5V (Arduino)
* GND -> GND (Arduino)
* AO (Analog Out) -> Pin A0 (Arduino)

### 2. Light LED -> Arduino
* LED (+) Anode -> Pin 2 (via 220 Ohm Resistor)
* LED (-) Cathode -> GND (Arduino)


## 🚀 How to Run Code
1. Open code.ino in Arduino IDE.
2. Select Board: Arduino Uno and the correct COM Port.
3. Click Upload.
4. Open Serial Monitor (9600 Baud) to view live ambient light values.
5. Cover the LDR sensor to simulate Night (LED turns ON automatically). Expose it to light for Day (LED turns OFF).
