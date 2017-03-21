// 14.3.2017

void prikazi();
void vaja3 () {
    printf("Masa stvari:\n");
    float moon = 7.3477e22;
    float sun = 1.989e30;
    float sum = moon + sun;
    printf("Luna:   %35.2f\n", moon);
    // 35 mest, od tega dve decimalki
    printf("Sonce:  %35.2f\n", sun);
    printf("Skupaj: %35.2f\n", sum);
    /** float (7 mest natančnosti, od +-10^-38 do +-10^38):
      * Luna:            73476998036085923000000.00
      * Sonce:   1989000014062258900000000000000.00
      * Skupaj:  1989000014062258900000000000000.00
      *
      * double (15 mest natančnosti, od +-10^-308 do +-10^308)

      */
    float x = 0.2;
    printf("%d\n", x == (float)0.2);
    // Lesson: konstante so default double
    /** Napiši funkcijo, ki s tipkovnice prebere znak
     *  in ga prikaže na zaslonu. Če je znak mala črka,
     *  naj jo pretvori v veliko črko.
     */
    prikazi();
}
void prikazi() {
  char znak;
  scanf("%c", &znak);
  // Puhan stvar izpelje drugače:
  // if (znak >= 'a' && znak <= 'z') znak += 'A' - 'a';
  // 'a' je ascii code znaka a
  if(znak > 96) {
    znak = znak - 32;
  } else {
    znak = znak;
  }
  printf("Znak je %c\n",znak);
}

/** int test1(float a, float b);
 *  void test2(double x);
 *  float test3(int x);
 *
 *  int z;
 *  float x;
 *
 *   Komentiraj klice:
 *  z = test1(1.1, 0.4); // w: truncation from double to float
 *  z = test1(2,3); // ok
 *  test1(x,x); // ok
 *  z = test2(42); // e, test2 je void
 *  x = test3(z,12); //e, test 3 vzame samo 2 parametra
 *  z = test(13); // w: truncation from float to int
 */
