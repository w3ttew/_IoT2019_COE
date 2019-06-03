#include "DHT.h"
#include "SoftwareSerial.h"
int Gas ;
int analogPin = A7;
//int digitalpin = 2;
#define DHTPIN 2 
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
SoftwareSerial pass(11,10);
void setup() {
  // put your setup code here, to run once:
//pinMode(analogPin,INPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  Serial.begin(9600);
  Serial.println("IOT Challent Day");
  dht.begin();
}
void loop() {
  int top = digitalRead(7);
  int bot = digitalRead(6);
  Gas = analogRead(analogPin);
  G = Serial.print(Gas);
  Serial.println("G"); 
  float t = dht.readTemperature();
  Serial.print(t);
  Serial.println("T");
  float h = dht.readHumidity();
  Serial.print(h);
  Serial.println("H"); 
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
    analogWrite(A3,255);
    analogWrite(A4,255);
    
  }
  if(top == 1&&bot == 1){
    W =  "11W";
    Serial.println("11W");
    analogWrite(A3,255);
    analogWrite(A4,0);
   
  }
  delay(500);

}
