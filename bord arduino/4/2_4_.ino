#include "SoftwareSerial.h"
SoftwareSerial Fai(11,10);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  
}

void loop() {
  int top = digitalRead(7);
  int bot = digitalRead(6);
  if(top == 0&&bot == 0){
    W = "00W";
    Serial.println("00W");
    analogWrite(A3,0);
    analogWrite(A4,255);
    
  }
  if(top == 1&&bot == 0){
    W = "XXW";
    Serial.println("XXW");
    analogWrite(A3,0);
    analogWrite(A4,0);
    
  }
  if(top == 0&&bot == 1){
    W =  "01W";
    Serial.println("01W");
    analogWrite(A3,150);
    analogWrite(A4,255);
    
  }
  if(top == 1&&bot == 1){
    W =  "11W";
    Serial.println("11W");
    analogWrite(A3,255);
    analogWrite(A4,0);
    
  }
  
}
