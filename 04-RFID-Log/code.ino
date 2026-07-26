#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);

// LED and Buzzer Pins
const int BUZZER = 8;
const int GREEN_LED = 7;
const int RED_LED = 6;

// Authorized RFID Card/Tag UID (Replace with your tag's UID)
String authorizedUID = "A3 B4 C5 D6"; 

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();

  pinMode(BUZZER, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  Serial.println("--- RFID Log System Ready ---");
  Serial.println("Scan your RFID Card or Tag...");
}

void loop() {
  // Look for new cards
  if (!rfid.PICC_IsNewCardPresent()) return;
  if (!rfid.PICC_ReadCardSerial()) return;

  // Read Card UID
  String content = "";
  for (byte i = 0; i < rfid.uid.size; i++) {
    content.concat(String(rfid.uid.uidByte[i] < 0x10 ? " 0" : " "));
    content.concat(String(rfid.uid.uidByte[i], HEX));
  }
  content.toUpperCase();
  
  Serial.print("Scanned UID:");
  Serial.println(content);

  // Check Authorization Log
  if (content.substring(1) == authorizedUID) {
    Serial.println("LOG: Access Granted!");
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(BUZZER, HIGH);
    delay(200);
    digitalWrite(BUZZER, LOW);
    delay(1500);
    digitalWrite(GREEN_LED, LOW);
  } else {
    Serial.println("LOG: Access Denied! Unauthorized Card.");
    digitalWrite(RED_LED, HIGH);
    digitalWrite(BUZZER, HIGH);
    delay(800);
    digitalWrite(BUZZER, LOW);
    digitalWrite(RED_LED, LOW);
  }

  rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();
}
