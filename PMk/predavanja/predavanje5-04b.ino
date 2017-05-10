void setup() {
  
}

void loop() {
  static int x, smer=1;
  if (x==0) smer = 1;
  if (x==255) smer = -1;
  x += smer;
  analogWrite(10,x);
  delay(10);
}
