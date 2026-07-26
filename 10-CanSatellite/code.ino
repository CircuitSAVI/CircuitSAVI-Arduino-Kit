#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11
#define LDR_PIN A0

DHT dht(DHTPIN, DHTTYPE);

unsigned long packetCount = 0;

void setup() {
  Serial.begin(9600);
  dht.begin();
  
  // Header format for Telemetry Data stream
  Serial.println("PKT,TEMP(C),HUMIDITY(%),LIGHT");
}

void loop() {
  packetCount++;
  
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  int lightVal = analogRead(LDR_PIN);

  // Check if readings are valid
  if (isnan(temp) || isnan(hum)) {
    temp = 0.0;
    hum = 0.0;
  }

  // Telemetry Packet Transmission format
  Serial.print(packetCount);
  Serial.print(",");
  Serial.print(temp);
  Serial.print(",");
  Serial.print(hum);
  Serial.print(",");
  Serial.println(lightVal);

  delay(1000);
}
