struct vektor {
    float x;
    float y;
    float z;
};
struct vektor q, v = {1, 0, 0}, w = {0, 1, 0};
struct vektor vecProduct (struct vektor a, struct vektor b);
int razlika(int *z, int n);
void predavanje3_23(){
    q = vecProduct(v,w);
    // array
    int zb[5]={12, 13, -1, 5, 6};
    printf("%d\n", razlika(zb, 5));
    // string
    // char beseda[] = {'m', 'i', 'z', 'a', 0}; // nula je zakljuični ničeli znak (terminating null character)
    char beseda[] = "miza"; // nula se samodejno doda
    int i;
    for (i=0; beseda[i] != 0; i++) printf("%c", beseda[i]);
}
/** array -- tip arrayname[dimenzija] = {v1, v2, v3, ..., vN}
 *  dim >= N
 *  če je dimenzija > N, dobijo neinicializirane vrednosti 0
 *  int zb[] = {v1, v2, ...} || int zb[9] = {v1, v2, ...(v9)}
 *  prvemu elementu moraš nastaviti vrednost, dela tudi
 *    int zb[7] = {0}
 *  vsak element arraya zaseda toliko bitov kot je podatkovni tip (npr int je 32 bitov), vsaka celica ima 8 bitov (torej en element v arrayu tipa int zasede 4 celice)
 *
 *
 *
 */
int razlika(int *z, int n){
    int i, min, maks;
    min = maks = z[0];
    for (i=1; i<n; i++){
        if (z[i] > maks) maks = z[i];
        if (z[i]<min) min = z[i];
    }
    return maks-min;
}
struct vektor vecProduct (struct vektor a, struct vektor b){
    struct vektor tmp;
    tmp.x = a.y*b.z-a.z*b.y;
    tmp.y = a.z*b.x-a.x*b.z;
    tmp.z = a.x*b.y-a.y*b.x;
    return tmp;
};
