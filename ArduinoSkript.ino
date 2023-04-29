int RED = 3;
int GREEN = 5;
int BLUE = 6;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

}

void loop() {
  digitalWrite(RED, HIGH);
  delay(50);
  digitalWrite(GREEN, HIGH);
  delay(50);
  digitalWrite(BLUE, HIGH);
  delay(50);
  digitalWrite(RED, LOW);
  delay(50);
  digitalWrite(GREEN, LOW);
  delay(50);
  digitalWrite(BLUE, LOW);
  
}
