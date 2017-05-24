void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

float dist1,dist2,avgDist;
bool ledState=0;
unsigned long currMillis,prevMillis=millis(),interval;

void loop() {
  dist1=(12.5/(3.3*analogRead(A0)/1024))-0.42;
  dist2=(12.5/(3.3*analogRead(A1)/1024))-0.42;
  avgDist=(dist1+dist2)/2.0;

  if(avgDist>36)interval=2000;
  else if(avgDist>22) interval=500;
  else if(avgDist>16) interval=300;
  else if(avgDist>10) interval=100; 
  else if(avgDist>4) interval=1;
  
  currMillis = millis();
  if((currMillis-prevMillis)>interval){
    if(ledState==0)ledState=1;
    else ledState=0;
    digitalWrite(13,ledState);
    analogWrite(10,ledState*100);
    prevMillis=currMillis;
  }
}
