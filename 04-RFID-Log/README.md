#  Project 04: RFID Log System

## 📋 Components Required
- Arduino Uno
- MFRC522 RFID Module with Tag/Card
- Piezo Buzzer
- 1x Green LED & 1x Red LED
- 2x 220Ω Resistors
- Jumper Wires & Breadboard


##  Direct Wiring Connections

### 1. MFRC522 RFID Module ➔ Arduino
* SDA (SS) ➔ Pin 10 (Arduino)
* SCK ➔ Pin 13 (Arduino)
* MOSI ➔ Pin 11 (Arduino)
* MISO ➔ Pin 12 (Arduino)
* GND ➔ GND (Arduino)
* RST ➔ Pin 9 (Arduino)
* 3.3V ➔ 3.3V (Arduino - Do NOT connect to 5V)

### 2. Buzzer & LEDs ➔ Arduino
* Buzzer (+) Anode ➔ Pin 8 (Arduino)
* Buzzer (-) Cathode ➔ GND (Arduino)
* Green LED (+) Anode ➔ Pin 7 (via 220Ω Resistor)
* Red LED (+) Anode ➔ Pin 6 (via 220Ω Resistor)
* LEDs (-) Cathodes ➔ GND (Arduino)


## 🚀 How to Run Code
1. Open `code.ino` in Arduino IDE.
2. Go to Sketch ➔ Include Library ➔ Manage Libraries, search for MFRC522, and click Install.
3. Select Board: Arduino Uno and the correct COM Port.
4. Upload the code and open the Serial Monitor (9600 Baud)**.
5. Scan your RFID card. Check the Serial Monitor log output and update the `authorizedUID` in `code.ino` to match your card ID.
