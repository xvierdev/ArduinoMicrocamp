int red = 3;
int yellow = 4;
int green = 5;

void ligarLed(int pino) {
  digitalWrite(pino, HIGH);
}

void desligarLed(int pino) {
  digitalWrite(pino, LOW);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  ligarLed(green);
  delay(3000);
  desligarLed(green);
  ligarLed(yellow);
  delay(1000);
  desligarLed(yellow);
  ligarLed(red);
  delay(3000);
  desligarLed(red);
}
