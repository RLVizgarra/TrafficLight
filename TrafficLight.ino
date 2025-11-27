const int ledGreenOne = 5;      // D1
const int ledYellowOne = 4;     // D2
const int ledRedOne = 14;       // D5
const int ledGreenTwo = 12;     // D6
const int ledYellowTwo = 13;    // D7
const int ledRedTwo = 15;       // D8

void setup(){
  Serial.begin(115200);

  Serial.println("Setup pin modes");
  pinMode(ledGreenOne, OUTPUT);
  pinMode(ledYellowOne, OUTPUT);
  pinMode(ledRedOne, OUTPUT);
  pinMode(ledGreenTwo, OUTPUT);
  pinMode(ledYellowTwo, OUTPUT);
  pinMode(ledRedTwo, OUTPUT);

  Serial.println("Setup test all high");
  digitalWrite(ledGreenOne, HIGH);
  digitalWrite(ledYellowOne, HIGH);
  digitalWrite(ledRedOne, HIGH);
  digitalWrite(ledGreenTwo, HIGH);
  digitalWrite(ledYellowTwo, HIGH);
  digitalWrite(ledRedTwo, HIGH);

  delay(1500);

  Serial.println("Setup test all low");
  digitalWrite(ledGreenOne, LOW);
  digitalWrite(ledYellowOne, LOW);
  digitalWrite(ledRedOne, LOW);
  digitalWrite(ledGreenTwo, LOW);
  digitalWrite(ledYellowTwo, LOW);
  digitalWrite(ledRedTwo, LOW);
}

void loop(){
  Serial.println("Phase 1 -> Red1 high. Green2 high.");
  digitalWrite(ledRedOne, HIGH);
  digitalWrite(ledGreenOne, LOW);
  digitalWrite(ledYellowOne, LOW);
  digitalWrite(ledRedTwo, LOW);
  digitalWrite(ledGreenTwo, HIGH);
  delay(5000); // Wait 5 seconds

  Serial.println("Phase 2 -> Yellow2 high.");
  digitalWrite(ledYellowTwo, HIGH);
  delay(2000); // Wait 2 seconds

  Serial.println("Phase 3 -> Red2 high. Green1 high.");
  digitalWrite(ledRedTwo, HIGH);
  digitalWrite(ledGreenTwo, LOW);
  digitalWrite(ledYellowTwo, LOW);
  digitalWrite(ledRedOne, LOW);
  digitalWrite(ledGreenOne, HIGH);
  delay(5000); // Wait 5 seconds

  Serial.println("Phase 4 -> Yellow1 high.");
  digitalWrite(ledYellowOne, HIGH);
  delay(2000); // Wait 2 seconds
}
