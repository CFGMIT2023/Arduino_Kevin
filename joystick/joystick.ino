const byte VRx = A0;
const byte VRy = A1;
const byte sw = 5;
int x,y,b;
unsigned int temps = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  pinMode(sw, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x=analogRead(VRx);
  y=analogRead(VRy);
  b=digitalRead(sw);
  Serial.println(x);
  Serial.println(y);
  Serial.println(b);
  delay(temps);
}

