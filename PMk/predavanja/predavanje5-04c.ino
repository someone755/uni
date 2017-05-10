void setup() {
  pinMode(7,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  static int stevec = 0;
  static int staro = 1;
  int novo = digitalRead(7);
  if (novo!=staro){
    delay(100);
    staro = novo;
    if (novo==0) stevec++;
  }
  if (stevec%10==0) Serial.println(stevec);
}
