int red=5;
int yellow=6;
int green=7;
int buzzer=8;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  digitalWrite(buzzer,LOW);
  delay(500);
  
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(buzzer,LOW);
  delay(300);

  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(buzzer,LOW);
  delay(2000);

  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  digitalWrite(buzzer,HIGH);
  delay(500);
}