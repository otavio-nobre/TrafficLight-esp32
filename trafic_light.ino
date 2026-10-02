const int pinoLED1 = 12;
const int pinoLED2 = 27;
const int pinoLED3 = 25;
void setup() {
  pinMode(pinoLED1, OUTPUT);
   pinMode(pinoLED2, OUTPUT);
   pinMode(pinoLED3, OUTPUT);
}

void loop() {
  digitalWrite(pinoLED1, HIGH);
  delay(1000);
  digitalWrite(pinoLED1, LOW);
  delay(1000);
  digitalWrite(pinoLED3, HIGH);
  delay(1000);
  digitalWrite(pinoLED3, LOW);
  delay(1000);
  digitalWrite(pinoLED2, HIGH);
  delay(1000);
  digitalWrite(pinoLED2, LOW);
  delay(1000);
}