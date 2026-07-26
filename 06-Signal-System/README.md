#  Project 06: Traffic Signal System

## 📋 Components Required
- Arduino Uno
- 1x Red LED
- 1x Yellow LED
- 1x Green LED
- 3x 220 Ohm Resistors
- Jumper Wires and Breadboard


## 📌 Direct Wiring Connections

### 1. Signal LEDs -> Arduino
* Red LED (+) Anode -> Pin 2 (via 220 Ohm Resistor)
* Yellow LED (+) Anode -> Pin 3 (via 220 Ohm Resistor)
* Green LED (+) Anode -> Pin 4 (via 220 Ohm Resistor)
* All LEDs (-) Cathodes -> GND (Arduino - Common Ground)

---

## 🚀 How to Run Code
1. Open code.ino in Arduino IDE.
2. Go to Tools -> Board and select Arduino Uno.
3. Select the correct COM Port in Tools -> Port.
4. Click Upload.
5. The traffic signal system will cycle automatically through Red (Stop), Yellow (Ready), and Green (Go) lights.
