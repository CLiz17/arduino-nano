void setup() {
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int value = analogRead(A0);
  int led = map(value,0,1023,0,255);
  analogWrite(9,led);
  delay(10);
}
