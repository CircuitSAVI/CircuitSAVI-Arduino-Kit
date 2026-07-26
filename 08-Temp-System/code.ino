// LM35 Temperature Sensor Pin
const int TEMP_PIN = A0;
const int ALERT_LED = 2;

// Temperature threshold in Celsius to trigger alert
const float TEMP_THRESHOLD = 35.0; 

void setup() {
  Serial.begin(9600);
  pinMode(ALERT_LED, OUTPUT);
}

void loop() {
  int rawValue = analogRead(TEMP_PIN);
  
  // Calculate voltage and convert to Celsius
  float voltage = rawValue * (5.0 / 1023.0);
  float tempC = voltage * 100.0;

  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.println(" °C");

  if (tempC >= TEMP_THRESHOLD) {
    digitalWrite(ALERT_LED, HIGH);
  } else {
    digitalWrite(ALERT_LED, LOW);
  }

  delay(1000);
}
