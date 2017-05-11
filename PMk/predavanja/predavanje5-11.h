
void predavanje5_11(){
    int x = 20;
    printf("%x\n",x);
    printf("%x\n",!x);
    printf("%x\n",~x);
/**
 *  >> n -- premik v desno za n bitov; deljenje z dva
 *  << n -- premik v levo za n bitov; množenje z dva
 */
    x = -20;
    x = x>>2;
    printf("%x\n", x);
    x = 20;
    x = x>>2;
    printf("%x\n",x);
    unsigned int y=0xFFFFEC;
    y = y>>2;
    printf("%x\n",y);
  /**
   *  x&y: ohranijo se samo istoležne enke
   *  x|y: ohranijo se vse enke
   *  pazi, && in || sta logična operatorja
   */
    unsigned int a = 0xB1; //10110001
    unsigned int b = 0x38; //00111000
    printf("%x\n",a&b); //00110000
    printf("%x\n",a|b); //10111001
  /**
   *  izključno ali (xor), x^y:
   *  1100 xor -- seštevanje brez prenosa
   *  1010 =
   *  0110
   *
   */
    printf("%x\n",a^b);
  /**
   *  postavljanje bita (set)
   *  imamo podatek osem bitov, spremeniti želimo npr šesti bit na 1
   *  b7 b6 b5 b4 b3 b2 b1 b0
   *  0  1  0  0  0  0  0  0  <-- maska
   *  b7 1  b5 b4 b3 b2 b1 b0 <-- podatek|maska
   *
   *  brisanje bita (clear)
   *  imamo podatek osem bitov, spremeniti želimo npr šesti bit na 0
   *  b7 b6 b5 b4 b3 b2 b1 b0
   *  1  0  1  1  1  1  1  1  <-- maska
   *  b7 0  b5 b4 b3 b2 b1 b0 <-- podatek&maska
   *
   *  negacija bita
   *  imamo podatek osem bitov, negirati želimo npr šesti bit
   *  b7 b6  b5 b4 b3 b2 b1 b0
   *  0   1  0  0  0  0  0  0  <-- maska
   *  b7 ~b6 b5 b4 b3 b2 b1 b0 <-- podatek^maska
   *
   *  ugotavljanje vrednosti bita
   *  želimo vedeti ali je npr šesti bit 1 ali 0
   *  b7 b6 b5 b4 b3 b2 b1 b0 = B
   *  0  1  0  0  0  0  0  0  = M
   *  B&M == 0 <=> b6 = 0
   *  B&M != 0 <=> b6 = 1
   */
}
