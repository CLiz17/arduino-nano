const int echo = 2;
const int trig = 3;
const int red= 5;
const int green=7;
const int buzzer=10;
long duration;
int distance;

void setup() {
  Serial.begin(9600);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer,OUTPUT);
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance= (duration*0.034)/2;
  if (distance < 100){
    Serial.println("Welcome dear!");
    delay(500);
    Serial.println("Enter the password:");
  }
}

void loop() 
{ 
  int x=Serial.parseInt();
  int y=2022;
  if(Serial.available()>0)
  {
    if(x==y)
    {
      digitalWrite(red,LOW);
      digitalWrite(green,HIGH);
      digitalWrite(buzzer, LOW); 
      Serial.println("Access Granted");
    }
    else
    {
      digitalWrite(red,HIGH);
      digitalWrite(green,LOW);
      Serial.println("Access Denied");
      digitalWrite(buzzer, HIGH);
      delay(2000);
      digitalWrite(buzzer, LOW); 
      delay(2000);
    }
  }
}