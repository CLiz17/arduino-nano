const int trig=2;
const int echo=3;
const int red=5;
const int green=6;
const int motorpin=8;
const int buzzer=7;
long duration;
int distance;

void setup() {
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(motorpin,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=duration*0.034/2;
  if(distance<50){
    Serial.println("Welcome Home!");
    Serial.println("Enter the Password");
  }
}

void loop() {
  digitalWrite(motorpin,HIGH);
  int x=Serial.parseInt();
  int y=2022;
  if(Serial.available()>0)
  {
    if(x==y)
    { 
      digitalWrite(red,LOW);
      digitalWrite(green,HIGH);
      Serial.println("Access Granted");
      digitalWrite(buzzer,LOW);
      digitalWrite(motorpin,LOW);
      delay(2000);
      digitalWrite(motorpin,HIGH);
      delay(1);
      Serial.println("Enjoy!");
      exit(1);
    }
    else
    {
      digitalWrite(red,HIGH);
      digitalWrite(green,LOW);
      Serial.println("Access Denied");
      Serial.println("Try Again!");
      for(int n=10; n>0; n--){
        digitalWrite(buzzer,HIGH);
        delay(100);
        digitalWrite(buzzer,LOW);
        delay(100);
      }
      digitalWrite(motorpin,HIGH);
    }  
  }
}
