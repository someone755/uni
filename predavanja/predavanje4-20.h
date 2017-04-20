void predavanje4_20(){
  char x=-2, y=254;
  printf("%d, %d\n",x,y);
  printf("%x, %x\n",x,y);



  // Hex
  int t=15;
  int z=0xF;
  printf("%d, %x\n",t,z);
  t=11;
  z=011;
  printf("%d, %d\n",t,z);

}
/** 1 bajt = 8 bitov
 *  b7  b6  b5  b4  b3  b2  b1  b0
 *  ^MSB - most significant bit ^LSB - least significant bit
 *
 *  Da si priharnimo pisanje vzamemo šestnajstiški sistem
 *
 *  Neki o številskem krogu
 *
 *
 *  0 1 1 0 0 1 0 0 <- original
 *  1 0 0 1 1 0 1 1 <- eniški komplement
 *               +1
 *  1 0 0 1 1 1 0 0 <- dvojiški komplement
 *
 *    0 1 1 0 0 1 0 0
 *  + 1 0 0 1 1 1 0 0
 *  =10 0 0 0 0 0 0 0
 *
 *  MSB je predznak ( 0=+, 1=-)
 *  254(10) = 11111110(2)
 *
 *  arduino
 *  za Uref odčita 111 (Uref = Uvh pri teh poceni krmilnikih)
 *  za 1/2 Uref odčita 100
 *  za 1/4, 1/8 etc
 *  step je ULSB -- najmanjša razlika napetosti da se spremeni odčitana vrednost A/D pretvornika (ločljivost)
 *  za nas je ULSB = Uref/8
 *
 *  setup:
 *  Serial.begin(9600); //v bitih/sekundo -- 9600 baudov
 *  loop:
 *  int x = analogRead(A0);
 *  Serial.println(x);
 *  delay(250);
 */
