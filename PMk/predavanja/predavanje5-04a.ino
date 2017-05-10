#i nclude <Arduino.h>

void setup() {
  Serial.begin(9600);
  int i;
  for (i=10;i<14;i++) pinMode(i,OUTPUT);
}

void loop() {
  int i,x;
  static int aktual;
  x=analogRead(A0);
  if (abs(aktual-x)>5) aktual=x;
  else x=aktual;
  x=x/1023.0*5;
  for(i=0;i<5;i++){
    if(i<x) digitalWrite(i+10,HIGH);
    else digitalWrite(i+10,LOW);
  }
  delay(10);
}
