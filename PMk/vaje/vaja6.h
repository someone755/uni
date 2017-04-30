//4.4.2017
/** kazalci
 *
 *   float stevilo = 3.14; //<-- rezervira se 4 bajte prostora na naslovu npr 1000
 *   float *pStevilo; //<-- rezervira se 4 bajte na naslovu npr 3100
 *   ^povemo na kak tip podatka kaže pointer
 *   pStevilo = &stevilo; //<-- na naslov 3100 se zapiše 1000
 *   *pStevilo = 2.16; //<-- na naslov 1000 se shrani 2.16
 *
 */

/**
 *  Napiši program, ki sortira zbirko učencev (bubble in shaker sort)
 */
#define DIM 3000 //macro (makró)
//Warning: Modern PC should be done within 60 seconds!
struct ucenec {
    int visina;
    int starost; //pri osnovnošolcih strogo float, če ne double
    float teza;
    char spol;
    char ime[1000];
    char priimek[1000];
}; // 4 + 4 + 4 + 1 + 1*100 + 1*100 bajt == 13 bajtov
struct ucenec ekipa[DIM]; // DIM × 13 bajtov
struct ucenec *pEkipa[DIM]; // DIM × 4 bajti

void vaja6() {
    clock_t zacetek; // za štopanje

    int i,urejeno,stPrimerjav=0;
    struct ucenec tmp;
    struct ucenec *pTmp;
    srand(0);
    for(i=0;i<DIM;i++){
        ekipa[i].visina=rand()%21+110;
        pEkipa[i] = &ekipa[i];
    }
    zacetek = clock();
    //bubble
    do{
        urejeno=1;
        for(i=0;i<DIM-1;i++){
            stPrimerjav++;
            if(ekipa[i].visina>ekipa[i+1].visina){
                tmp=ekipa[i];
                ekipa[i]=ekipa[i+1];
                ekipa[i+1]=tmp;
                urejeno=0;
            }
        }
    } while(!urejeno);
    clock_t konec = clock();
    printf("Bubble primerjave w/o pointers: %d\n",stPrimerjav);
    printf("Time:   %gms\n",(float)(konec - zacetek)*1000/CLOCKS_PER_SEC);

    //reset array and timer for another go w/ pointers
    stPrimerjav=0;
    srand(0);
    for(i=0;i<DIM;i++){
        ekipa[i].visina=rand()%21+110;
        pEkipa[i] = &ekipa[i];
    }
    zacetek=clock();
    //bubble s pointerji
    do{
        urejeno=1;
        for(i=0;i<DIM-1;i++){
            stPrimerjav++;
            if(pEkipa[i]->visina>pEkipa[i+1]->visina){
                pTmp=pEkipa[i];
                pEkipa[i]=pEkipa[i+1];
                pEkipa[i+1]=pTmp;
                urejeno=0;
            }
        }
    } while(!urejeno);
    konec=clock();
    printf("Bubble primerjave w/ pointers:  %d\n",stPrimerjav);
    printf("Time:   %gms\n",(float)(konec - zacetek)*1000/CLOCKS_PER_SEC);
    /** Lesson: lažje je premikati 4-bajtne naslove spremenljivk
     *  kot celotne več sto-/tisoč-bajtne spremenljivke same.
     *  Enako število primerjav vendar nekajkrat krajša izvedba.
     */
    //shaker
    //TODO: write shaker algorithm
}
