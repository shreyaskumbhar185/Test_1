int a=A0;
int b=6;

void setup() {
  Serial.begin(9600);
  pinMode(b,INPUT);
}

void loop() {
  int av;
  int bv;
  av=analogRead(a);
  bv=digitalRead(b);
  Serial.print(av);
}
