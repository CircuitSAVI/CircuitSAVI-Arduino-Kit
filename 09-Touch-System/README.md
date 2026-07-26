#  Project 09: Touch Sensor System

## 📋 Components Required
- Arduino Uno
- TTP223 Capacitive Touch Sensor Module
- 1x LED (Built-in Pin 13 or external LED)
- 1x 220 Ohm Resistor
- Jumper Wires and Breadboard


### Direct Wiring Connections

### 1. Touch Sensor -> Arduino
* VCC -> 5V (Arduino)
* GND -> GND (Arduino)
* SIG / OUT -> Pin 2 (Arduino)

### 2. External LED (Optional) -> Arduino
* LED (+) Anode -> Pin 13 (via 220 Ohm Resistor)
* LED (-) Cathode -> GND (Arduino)


## 🚀 How to Run Code
1. Open [code.ino](code.ino) in Arduino IDE.
2. Select Board: Arduino Uno and the correct COM Port.
3. Click Upload.
4. Open Serial Monitor (9600 Baud).
5. Touch the sensor pad to trigger the LED.
