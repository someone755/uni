// 16.5.2017
/**
 * Za nek rezervoar smo umerili merilnik količine goriva in dobili vrednosti:
 * Količina goriva | ADC
 * 1/1 | 950-1023
 * 3/4 | 900-949
 * 1/2 | 800-899
 * 1/4 | 400-799
 * rezerva | 0-399
 * Napiši program, ki prikazuje količino goriva s pomočjo petih LED diod.
 */
void setup() {
  int i;
  for(i=41;i<46;i++) pinMode(i,OUTPUT);
}

void loop() {
  int i, rezervoar = analogRead(A0);
  for(i=41;i<46;i++) digitalWrite(i,LOW);
  if(rezervoar>949) for(i=41;i<46;i++) digitalWrite(i,HIGH);
  else if(rezervoar>899) for(i=42;i<46;i++) digitalWrite(i,HIGH);
  else if(rezervoar>799) for(i=43;i<46;i++) digitalWrite(i,HIGH);
  else if(rezervoar>399) for(i=44;i<46;i++) digitalWrite(i,HIGH);
  else if(rezervoar<400) digitalWrite(45,HIGH);
  delay(5000);
}
