//11.4.2017

/** Pisanje v datoteko
 *  FILE *fp; <-- file pointer, hrani naslov, kjer se datoteka nahaja
 *  fp=fopen("filename","params");
 *                          ^wt (write text), wb (write binary), read etc.
 *  fprintf(fp,"%d",n);
 *  fclose(fp); <--zapri
 */

void vaja7(){
    FILE *fp;
    fp=fopen("test.txt","wt");
    if(fp==NULL){
        printf("Error opening file, exiting!"); //r/o filesystem ali poln RAM, da se pointer ne more ustvarit
        exit(0);
    }
    int i,n; char text[100];
    printf("Vnesi 5 najljubših besed:\n");
    fprintf(fp,"Tvoje najljubše besede so:\n");
    for(i=0;i<5;i++){
        scanf("%s",text); //ime stringa je ža sam naslov stringa
        fprintf(fp,"%s\n",text);
    }
    fclose(fp);
    /** Napiši programm, ki iz datotek bere besedilo, ter preverja,
     *  če so oklepaji v parih. Program naj izpiše sporočilo o napaki
     *  "Manjka zaklepaj," ali "Nepričakovan oklepaj v XX vrstici."
     */
    FILE f;
    char znak;
    int oklepaji=0,vrstica=1;
    *f=fopen("test.txt","rt");
        if(fp==NULL){
        printf("Error opening file, exiting!");
        exit(0);
    }
    while((znak=fgetc(f))!=EOF){
        if(znak=='\n') vrstica++;
        if(znak=='(') oklepaji++;
        if(znak==')') oklepaji--;
        if(oklepaji<0) {
            printf("Orphan end bracket in line %d!\n",vrstica);
            break;
        }
    }
    if(oklepaji>0) printf("Orphan opening bracket number: %d!\n",oklepaji);
    fclose(f);
}
