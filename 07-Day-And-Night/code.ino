// LDR Sensor and LED Pins
const int LDR_PIN = A0;
const int LIGHT_LED = 2;

// Threshold value to detect dark/night condition
const int DARK_THRESHOLD = 500; 

void setup() {
  Serial.begin(9600);
  pinMode(LIGHT_LED, OUTPUT);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // If light level drops below threshold, it's Night -> Turn ON light
  if (ldrValue < DARK_THRESHOLD) {
    digitalWrite(LIGHT_LED, HIGH);
  } 
  // Otherwise it's Day -> Turn OFF light
  else {
    digitalWrite(LIGHT_LED, LOW);
  }

  delay(500);
}
