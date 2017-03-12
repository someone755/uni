/**
 *  Modifikatorji formatnih določil:
 *       %Nd -- N mest, poravnano na desno
 *       %0Nd -- N mest, desna poravnano, prazna mesta zapolnjena z 0
 *       %N.Mf -- N mest, M za decimalno piko
 *   Znaki:
 *
 *   Psevdonaključna števila:
 *
 */

 int event(float prob) {
     if ((float) rand() / RAND_MAX <= prob) return 1;
     else return 0;
 }

 void predavanje3_9 () {
    //Modifikatorji formatnih določil
    printf("### Predavanje 9.3.:\n");
    printf("%4d\n", 12);
    printf("%4d\n", 1234);
    printf("%6.2f\n", 12341234.5678987654);
    //Znaki -- igraj se s tem spodaj
    char znak = 'B';
    //scanf("%c", &znak);
    printf("Znak %c ima kodo %d.\n", znak, znak);
    //scanf("%d", &znak);
    printf("Znak %c ima kodo %d.\n", znak, znak);

    //Verjetnost
    int i;
    int counter = 0;
    srand((unsigned long)time(NULL));
    for (i = 0; i < 10000; i++) {
        if (event(0.3)) counter++;
    }
    printf("%d\n", counter);

    float pBolan = 0.005;
    float pPozitBolan = 0.99;
    float pPozitZdrav = 0.01;
    unsigned long pozit = 0;
    unsigned long pozitBolni = 0;
    unsigned long j;
    srand((unsigned long)time(NULL));

    for (j = 0; j < 1000000; j++) {
        if (event(pBolan)) {
            if (event(pPozitBolan)) {
                pozitBolni++;
                pozit++;
            }
        } else {
            if (event(pPozitZdrav)) {
                pozit++;
            }
        }
    }
    printf("%f\n", 100 * (float) pozitBolni / pozit);
 }
