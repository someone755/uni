// 9.5.2017
void setup() {
  
}
String message = "ananas";
String morseZnak;

void loop() {
  int i;
  for(i=0;i<message.length();i+){
    morseZnak=fromCharToMorse(message[i]);
    Serial.println(morseZnak);
    for(j=0;j<morseZnak.length();j++){
      if(morseZnak[j]='.') dot();
      else dash();
    }
    delay(150);
  }
  delay(350);
}
String fromChaToMorse(char ch){
  /* String -- objekt za znakovni niz v arduinu */
  switch(ch){
    case 'a':return ".-"; break;
    case 'n':return "-."; break;
    case 's':return "..."; break;
    case 'o':return "---"; break;
  }
}
void dot() {
  analogWrite(10,127);
  delay(50);
  analogWrite(10,0);
  delay(50);
}
void dash(){
  analogWrite(10,127);
  delay(150);
  analogWrite(10,0);
  delay(50);
}

