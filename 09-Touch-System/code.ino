// Touch Sensor and LED Pins
const int TOUCH_PIN = 2;
const int LED_PIN = 13;

void setup() {
  pinMode(TOUCH_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int touchState = digitalRead(TOUCH_PIN);

  if (touchState == HIGH) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Touch Detected: LED ON");
  } else {
    digitalWrite(LED_PIN, LOW);
    Serial.println("No Touch: LED OFF");
  }

  delay(100);
}
