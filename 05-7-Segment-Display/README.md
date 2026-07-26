# Project 05: 7-Segment Display Counter

## 📋 Components Required
- Arduino Uno
- 1-Digit 7-Segment Display (Common Cathode)
- 7x 220Ω Resistors
- Jumper Wires & Breadboard


##  Direct Wiring Connections

### 1. 7-Segment Pins ➔ Arduino
* Segment A ➔ Pin 2 (via 220Ω Resistor)
* Segment B ➔ Pin 3 (via 220Ω Resistor)
* Segment C ➔ Pin 4 (via 220Ω Resistor)
* Segment D ➔ Pin 5 (via 220Ω Resistor)
* Segment E ➔ Pin 6 (via 220Ω Resistor)
* Segment F ➔ Pin 7 (via 220Ω Resistor)
* Segment G ➔ Pin 8 (via 220Ω Resistor)
* Common Pin (COM / GND) ➔ GND (Arduino)


## 🚀 How to Run Code
1. Open `code.ino` in Arduino IDE.
2. Select Board: Arduino Uno and the correct COM Port.
3. Upload the code.
4. The 7-segment display will automatically cycle through digits 0 to 9 with a 1-second interval.
