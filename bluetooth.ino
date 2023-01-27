#include <SoftwareSerial.h>

#define TxD 11
#define RxD 12

SoftwareSerial mySerial(RxD, TxD);
void setup() {
  mySerial.begin(9600);
  Serial.begin(9600);
}

void loop() 
{
  boolean isValidInput;
  do{
    byte c;
    while( !mySerial.available());
    c= mySerial.read();
    Serial.print(c);
    switch(c){
      case 'a':
        mySerial.println("you have entered a");
        isValidInput = true;
        break;
      case 'b':
        mySerial.println("you have entered b");
        isValidInput = true;
        break;
      default:
        mySerial.println("you have entered b");
        break;
    }
  }