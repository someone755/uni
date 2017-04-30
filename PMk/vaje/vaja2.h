// 7.3.2017
/**
 *  Iračunaj integral funkcije 2x^2-5x v podanih mejah.
 *  Rezultat preveri tudi analitično.
 */
void vaja2 () {
    double dx = 0.01;
    double x0,x1,x;
    double integral = 0;
    printf("Input interval lower limit:\n");
    scanf("%lf",&x0);
    printf("%f\n",x0);
    printf("Input interval upper limit:\n");
    scanf("%lf",&x1);
    printf("%f\n",x1);
    for ( x = x0; x < x1; x = x + dx ) {
        integral += dx *( 2 * x * x - 5 * x );
    }
    printf("Integral result: %lf \n", integral);
}

/**
 *   Številski tipi:
 *   ime    dolžina
 *   char    8-bit    [-128, 127]
 *   short   16-bit   [-32768, 32767]
 *   long    32-bit   ~4.2*10^9 cifer
 *   int    (32-bit)
 *  unsigned: nepredznačeno
 *
 */
