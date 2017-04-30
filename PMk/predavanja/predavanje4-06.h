/**
 *
 *
 *
 *
 *
 */
int predznak(int vredn);
int strcmp(char *a, char *b);
void menjaj(int *a, int *b);

void predavanje4_06(){
    char a[]="neki";
    char b[]="neki";
    if(a==b) printf("a==b\n");
    if("neki"=="neki") printf("neki=neki\n"); //drži ker compiler optimizira kodo -- ker ni svoja spremenljivka, se oba
                                            // zapisa "neki" shranita na isto mesto v spominu
    if(strcmp(a,b)==0) printf("strcmp je 0; niza sta enaka\n"); //vrne -1, 0, ali 1

    printf("%s\n",&a[2]); // prints "ki"

    /** Funkcija ki zamenja vrednosti dveh spremenljivk */
    int x=10,y=20;
    menjaj(&x,&y);
    printf("%d, %d\n",x,y);

    /** Kazalci na strukture
     *
     */
    struct test {int a;};
    struct test z, *p;
    p=&z;
    (*p).a = 10;
    p->a = 20; //ekvivalentna izraza (*p).a in p->a
}

int predznak(int vredn){
    if(vredn>0) return 1;
    if(vredn<0) return -1;
    return 0;
}

int strcmp(char *a, char *b){
    int i;
    for(i=0;a[i]&&b[i];i++){ //lahko pišeš if(i) namesto if(i!=0)
        if(a[i]!=b[i]) break;
    }
    return predznak(a[i]-b[i]);
}
void menjaj(int *a, int *b){ //rabiš pointerje ker če podaš samo spremenljivko boš menjal kopiji a in b, x in y pa ostaneta ista
    int tmp = *a;
    *a=*b;
    *b=tmp;
}
