// 21.3.2017
struct razdalja {
    int cevlji;
    float palci;
};

struct razdalja sestej (struct razdalja a, struct razdalja b);

void vaja4() {
/** Pierre Francois Verhulst -- neki z zajci -- "če je kdo tle amaterski biolog več o tem ve k js"
 *  (p(n+1) - p(n))/p(n) = r*(1 - p(n))
 */
    double pn1, pn=0.01;
    double r = 3;
    int i=0;
    for(i=0; i<60; i++){
        pn1 = pn+r*pn*(1-pn);
        if (i%5==0) {
            printf("%3d: %.6lf\n", i, pn);
            getch();
        }
        pn = pn1;
    }

    // Napiši funkcijo, ki sešteje dve razdalji podani v čevljih in palcih.
    char znak;
    scanf("%c", &znak);
    if (znak >= 'a' && znak <= 'z') znak += 'A' - 'a'; // 'a' je ascii code znaka a.
    printf("%c\n", znak);

    struct razdalja d1, d2, vsota;
    printf("Prva razdalja (čevlji palci):\n");
    scanf("%d %f", &d1.cevlji, &d1.palci);
    printf("Druga razdalja (čevlji palci):\n");
    scanf("%d %f", &d2.cevlji, &d2.palci);
    vsota = sestej(d1,d2);
    printf("Vsota razdalj je %d\' %.1f\"", vsota.cevlji, vsota.palci);
}

struct razdalja sestej (struct razdalja a, struct razdalja b){
    struct razdalja sum;
    sum.cevlji = a.cevlji + b.cevlji;
    sum.palci = a.palci + b.palci;
    if (sum.palci > 11){
        sum.cevlji++;
        sum.palci -= 12;
    }
    return sum;
};

/**
 *
 *
 *
 *
 */
