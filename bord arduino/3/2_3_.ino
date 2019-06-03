#include "SoftwareSerial.h"
SoftwareSerial Fai(11,10);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  Fai.begin(9600);
 
  
}

void loop() {
  Fai.println("Hello Iots_Challenge 2019");
  if(Fai.available()){
    String x = Fai.readString();
    Serial.println(x);
  }
  delay(50);
  
  
}
