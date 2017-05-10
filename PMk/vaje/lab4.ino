void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensor1Val = analogRead(A0);
  int sensor2Val = analogRead(A1);
  float sensor1Volt = 3.3*sensor1Val/1024;
  float sensor2Volt = 3.3*sensor2Val/1024;
  float dist1 = (12.5/sensor1Volt)-0.42;
  float dist2 = (12.5/sensor2Volt)-0.42;
  if (dist1>30) goto SKIP1;
  else { Serial.print("Desni: "); Serial.print(dist1); Serial.println(" cm");}
  SKIP1:
  if (dist2>30) goto SKIP2;
  else { Serial.print("Levi: "); Serial.print(dist2); Serial.println(" cm\n");}
  SKIP2:
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(100);
}
