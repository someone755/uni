// 28.3.2017

// Za razlago teh dveh prototipov beri funkcijo mojRand spodaj!
void puhanProof();
int mojRand(int n);

void vaja5(){
/** Naključna števila
 *  rabiš <stdlib.h> -> rand() [cela števila med 0 in 32767 (isto kot unsigned short)]
 */
    //srand(0); // 0 je seme generatorja
    time_t t; //time_t je struktura iz time.h, ki hrani čas
    srand((unsigned)time(&t)); //tu za seme uporabimo čas
    int i;
    for (i=0;i<10;i++){
        printf("%d\n",rand());
    }
    // Za razlago beri spodaj!
    puhanProof();
}


/** Puhan nakaže tudi, da rand() ni pravičen -- Višja števila imajo prednost.
 *  To utemelji s svojim računsko uravnoteženim random generatorjem.
 *  (Kak ta generator je, nimam pojma. Pull request/facebook pm/email dobrodošel.)
 *  (Napisan generator je sicer narejen za podobno pravičnost, vendar 1) ni enak
 *  in 2) je (verjetno, saj Puhanovega nimam na voljo za primerjavo) počasnejši.)
 */
int mojRand(int n){
    int limit = RAND_MAX-(RAND_MAX%n); // RAND_MAX skrajšamo za tistih nekaj števil (<n), ki \
                                       // jih naš n ne deli. Ali drugače: Zgornjo mejo nastavimo \
                                       // tako, da bo deljiva z n.
    int r;
    while((r=rand())>=limit);
    //printf("r: %d\nn: %d\nlimit: %d\nr(mod)n: %d\n",r,n,limit,r%n);
    //getch();
    return r%n; //funkcija vrne vrednosti med 0 in n-1
}
void puhanProof(){
    srand(0);
    printf("random stevila   rand()    impartial\n");
    while (1){ // zadeva v neskončnost piše cifre
        int i, stevec[6000], mojStevec[6000], vsota, mojaVsota;
        for (i=0; i < 6000; i++){
            stevec[i]=0;
            mojStevec[i]=0;
        }
        for (i=0; i<10000000; i++){
            stevec[rand()%6000]++;
            mojStevec[mojRand(6000)]++;
        }
        for (i=0, vsota=0, mojaVsota=0; i<3000; i++){
            vsota+=stevec[i];
            mojaVsota+=mojStevec[i];
        }
        printf("od 0 do 2999:    %d   %d\n", vsota, mojaVsota);
        for (vsota=0, mojaVsota=0; i<6000; i++){
            vsota+=stevec[i];
            mojaVsota+=mojStevec[i];
        }
        printf("od 3000 do 5999: %d   %d\n\n", vsota, mojaVsota);
    };
    /** Lesson: rand() je rahlo utežen proti višjim cifram.
     *  Naš (počasnejši?) random algoritem je uravnotežen.
     */
}
