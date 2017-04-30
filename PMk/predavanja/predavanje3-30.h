int a[]={2,4};
int b[]={1,3}; //[] pomeni array
void predavanje3_30(){
    a[2]=42;
    printf("%d\n", b[0]); //prints 42
    b[-1]=42;
    printf("%d\n", a[1]);
/** a -> a[0] = 2
 *       a[1] = 4   <-(b[-1] = 42)
 *  b -> b[0] = 1  <-(a[2] = 42)
 *       b[1] = 3
 *         ^ odmik od naslova arraya
 */
    char txt[] = "abcd";
    printf("%d\n", strlen(txt)); //ime zbirke brez [] pomeni naslov kje se string začne

/** Kazalci (pointers)
 *  kazalec je spremenljivka, katere vrednost je pomnilniški naslov
 *
 *  * -- kazalec indirekcije.
 */
    int x=42;
    printf("%d, %u\n", x, &x);
    float y;
    float *p; //zaradi zvezdice je p kazalec
    p = &y;
    *p = 3.14;
    printf("%g, %g, %g\n", y, p, *p);
    float *u;
    *u = 3.14;
    printf("%g, %g\n", u, *u);
/** Aritmetične operacije s kazalci:
 *  prištevanje/odštevanje konstant
 *  odštevanje dveh kazalcev
 */
    float *t;
    float z;
    t=&x;
    printf("%u\n", t);
    t++;
    printf("%u\n", t); //poveča se za 4 -- t++ pomeni premik za 4 pomnilniške celice (float je 4 bajte)

    int zb[5];
    int *p1, *p2;
    p1 = &zb[1];
    p2 = &zb[3];
    printf("%d\n, %f", p2-p1, zb[4]);//2, ker razlika pointerjev pove število podatkov vmes
/** zb = &zb[0]
 *  zb + n  -->  *(zb + n) = zb[n]
 *  *zb = zb[0]
 *
 */
}
