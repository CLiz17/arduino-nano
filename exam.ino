void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(6,OUTPUT);
  }
void loop() {
  while(Serial.available()==0){}
  delay(5000);
  int lang = Serial.parseInt();
  if(lang>20)
  {
    Serial.println("Enter your lanuage Marks out of 20");
  }
  else
  {
    Serial.println(lang);
  }
  Serial.println("Enter your science Marks");
  while(Serial.available()==0){}
  delay(5000);
  int science = Serial.parseInt();
  Serial.println(science);

  Serial.println("Enter your social Marks");
  while(Serial.available()==0){}
  delay(5000);
  int social = Serial.parseInt();
  Serial.println(social);

  int marks = lang + social + science;
  int percentage =map(marks,0,70,0,100);
  if (marks < 25) 
  {
    digitalWrite(6, HIGH);
    digitalWrite(3, LOW);
    Serial.println("YOU FAILED!");
    Serial.println(percentage);
  } 
  if (marks > 25) 
  {
    digitalWrite(6, LOW);
    digitalWrite(3, HIGH);
    Serial.println("YOU PASSED!");
    Serial.println(percentage);
  }
}