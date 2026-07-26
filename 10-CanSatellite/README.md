#  Project 10: CanSatellite Telemetry System

## 📋 Components Required
- Arduino Uno
- DHT11 Temperature & Humidity Sensor
- LDR Sensor / Light Dependent Resistor
- 10k Ohm Resistor
- Jumper Wires and Breadboard


### Direct Wiring Connections

### 1. DHT11 Sensor -> Arduino
* VCC -> 5V (Arduino)
* Data -> Pin 2 (Arduino)
* GND -> GND (Arduino)

### 2. LDR Sensor -> Arduino
* VCC -> 5V (Arduino)
* AO (Analog Out) -> Pin A0 (Arduino)
* GND -> GND (Arduino)


## 🚀 How to Run Code
1. Open [code.ino](code.ino) in Arduino IDE.
2. Select Board: Arduino Uno and the correct COM Port.
3. Click Upload.
4. Open Serial Monitor (9600 Baud) or Serial Plotter to view incoming telemetry data packets in real-time.
