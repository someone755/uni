// 16.5.2017
/**
 * Napiši program, ki na sponki 42 generira vlak pravokotnih impulzov \
 * frekvence 10 Hz in širine 10 ms:
 * __-_________-_________-_________-___
 */
void setup() {
  pinMode(42,OUTPUT);
}

void loop() {
  digitalWrite(42,HIGH);
  delay(10);
  digitalWrite(42,LOW);
  delay(90); // za ton A1 npr bi vzel ~1.2 ms vsak delay
}

