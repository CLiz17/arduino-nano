void setup() {
  
  int trig= 3;
  int echo= 2;
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);

}

void loop() {
  int trig= 3;
  int echo= 2;
  digitalWrite(trig, LOW);
  delayMicroseconds(4);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  long t = pulseIn(echo, HIGH);
  long cm = (t * 0.034)/2;
  if (cm > 100) {
    Serial.println("Access Denied, Try again!");
  }
  else if(cm<100 && cm >50){
    Serial.println("Try again!");
  }
  else if(cm <50){
    Serial.println("yes");
  }
}
