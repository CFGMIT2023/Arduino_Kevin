const int led=13;

void setup() {
  
  pinMode(led, OUTPUT);
}


void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(150);
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(150);
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(150);
}
