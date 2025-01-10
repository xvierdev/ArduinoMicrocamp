class Motor {
  public:
    int pin1, pin2;

  void Forward (int speed){
    if (speed > 0){
      digitalWrite(pin2, LOW);
      analogWrite(pin1, speed-150);
      delay(100);
      analogWrite(pin1, speed-100);
      delay(100);
      analogWrite(pin1, speed-50);
      delay(100);
      analogWrite(pin1, speed);
    }
  }

  void Backward (int speed){
    if (speed > 0){
      digitalWrite(pin1, LOW);
      analogWrite(pin2, speed-150);
      delay(100);
      analogWrite(pin2, speed-100);
      delay(100);
      analogWrite(pin2, speed-50);
      delay(100);
      analogWrite(pin2, speed);
    }
  }

  void Stop (){
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
  }
};

Motor motor1 {5, 6};
Motor motor2 {9, 10};

void Forward (int speed){
  motor1.Forward(speed);
  motor2.Forward(speed);
}

void Backward (int speed){
  motor1.Backward(speed);
  motor2.Backward(speed);
}

void Right (int speed){
  motor1.Forward(speed);
  motor2.Backward(speed);
}

void Left (int speed){
  motor1.Backward(speed);
  motor2.Forward(speed);
}

void Stop (){
  motor1.Stop();
  motor2.Stop();
}

void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Forward(255);
  // delay(2000);
  Stop();
  // delay(2000);
  // Backward(255);
  delay(5000);
}
