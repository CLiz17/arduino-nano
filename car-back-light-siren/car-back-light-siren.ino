void setup() {
  int red = 5;
  int yellow = 6;
  int green = 7;
  int trig = 5;
  int echo = 6;
  int buzzer = 7;
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int red = 2;
  int yellow = 3;
  int blue = 4;
  int trig = 5;
  int echo = 6;
  int buzzer = 7;
  digitalWrite(trig, LOW);
  delayMicroseconds(4);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  long t = pulseIn(echo, HIGH);
  long cm = t / 29 / 2;
  if (cm > 100) {
    digitalWrite(red, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(buzzer, LOW);
  }
  if (cm >= 50 && cm <= 100) {
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(yellow, HIGH);

    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    delay(500);
  }
  if (cm < 50) {
    digitalWrite(red, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(yellow, LOW);
    
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
  }
}