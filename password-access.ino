void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
  Serial.println("Welcome to iEDC");
  Serial.println("Enter your password");
}

void loop() {
  int x=Serial.parseInt();
  int y=30072022;
  if(Serial.available()>0)
  {
    if(x==y)
    {
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      Serial.println("Access Granted");
    }
    else
    {
      digitalWrite(7,LOW);
      Serial.println("Access Denied");
      while(1)
      {
        digitalWrite(5,HIGH);
        delay(100);
        digitalWrite(5,LOW);
        delay(100);
        digitalWrite(6,HIGH);
        delay(100);
        digitalWrite(6,LOW);
        delay(100);
      }
    }
  }
}
