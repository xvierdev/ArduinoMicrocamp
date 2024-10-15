/* Controle de semáfoto simples */
/* Substitua os pinos 2, 3 e 4 pelos pinos escolhidos no seu esquema elétrico. */
int green = 2;
int yellow = 3;
int red = 4;

void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, low);
  digitalWrite(red, HIGHT);
  delay(5000);
}
