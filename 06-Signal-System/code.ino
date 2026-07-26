// Traffic Signal LED Pins
const int RED_LED = 2;
const int YELLOW_LED = 3;
const int GREEN_LED = 4;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  // Red Light ON (STOP) - 5 Seconds
  digitalWrite(RED_LED, HIGH);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  delay(5000);

  // Yellow Light ON (GET READY) - 2 Seconds
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
  digitalWrite(GREEN_LED, LOW);
  delay(2000);

  // Green Light ON (GO) - 5 Seconds
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);
  delay(5000);
}
