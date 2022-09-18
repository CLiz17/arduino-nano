
void setup() {
  pinMode(5,INPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT); 
}d
void loop(){
 int a = digitalRead(5);
 if(a==0){
   digitalWrite(6,HIGH);
   delay(100);
   digitalWrite(6,LOW);
   delay(100);
   digitalWrite(7,HIGH);
   delay(100);
   digitalWrite(7,LOW);
   delay(100);
 }
 else
 {
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
 }
}

