# Project 08: Temperature Monitoring System

## 📋 Components Required
- Arduino Uno
- LM35 Temperature Sensor
- 1x Red LED
- 1x 220 Ohm Resistor
- Jumper Wires and Breadboard


##  Direct Wiring Connections

### 1. LM35 Sensor -> Arduino
* VCC Pin 1 -> 5V (Arduino)
* VOUT Pin 2 -> Pin A0 (Arduino)
* GND Pin 3 -> GND (Arduino)

### 2. Alert LED -> Arduino
* LED (+) Anode -> Pin 2 (via 220 Ohm Resistor)
* LED (-) Cathode -> GND (Arduino)



## 🚀 How to Run Code
1. Open [code.ino](code.ino) in Arduino IDE.
2. Select Board: Arduino Uno and the correct COM Port.
3. Click Upload.
4. Open Serial Monitor (9600 Baud) to monitor live room temperature readings.
