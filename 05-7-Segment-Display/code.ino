// 7-Segment Display Pin Mapping (Common Cathode)
// Segments: a, b, c, d, e, f, g
const int segA = 2;
const int segB = 3;
const int segC = 4;
const int segD = 5;
const int segE = 6;
const int segF = 7;
const int segG = 8;

// Number definitions for 0-9 (Common Cathode: HIGH = ON, LOW = OFF)
const byte digitPatterns[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

void setup() {
  // Set all segment pins as OUTPUT
  for (int pin = 2; pin <= 8; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void displayDigit(int digit) {
  digitalWrite(segA, digitPatterns[digit][0]);
  digitalWrite(segB, digitPatterns[digit][1]);
  digitalWrite(segC, digitPatterns[digit][2]);
  digitalWrite(segD, digitPatterns[digit][3]);
  digitalWrite(segE, digitPatterns[digit][4]);
  digitalWrite(segF, digitPatterns[digit][5]);
  digitalWrite(segG, digitPatterns[digit][6]);
}

void loop() {
  // Count from 0 to 9 with 1-second delay
  for (int i = 0; i < 10; i++) {
    displayDigit(i);
    delay(1000);
  }
}
