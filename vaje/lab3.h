#define RES 1000 //image resolution, "lahko si tud fulhade nardite"

struct cplx {
    double real;
    double imgn;
};

struct cplx func(struct cplx z);
unsigned char barva(struct cplx b);
void drawImg(unsigned char arr[RES][RES]);

//constant declaration / fractal seed
struct cplx c={-0.4,0.6};

void lab3(){
    struct cplx comp;
    unsigned char slika[RES][RES];
    int i, j;
    for(i=0;i<RES;i++){//fix on imgn part
        comp.imgn=1.7-(3.4*i/RES);
        for(j=0;j<RES;j++){ //roll over real parts
            comp.real = -1.7+(3.4*j/RES);
            slika[i][j]=barva(comp);
        }
    }
    drawImg(slika);
    //shraniBMP(slika,RES,RES,"fractal.bmp"); //and now we wait to get this function
}


unsigned char barva(struct cplx b){
    unsigned char i;
    for (i=0;i<255;i++){
        b=func(b);
        if(sqrt(b.real*b.real+b.imgn*b.imgn)>2){
            break;
        }
     }
     return 255-i;
}

struct cplx func(struct cplx z){
    struct cplx out;
    // f(z)=z*z+c
    out.real = z.real*z.real-z.imgn*z.imgn+c.real;
    out.imgn = z.imgn*z.real+z.real*z.imgn+c.imgn;
    return out;
};
void drawImg(unsigned char arr[RES][RES]){
    FILE *f = fopen("file.pgm","w");
    //FILE is an object type
    //*f points to the newly created "file.pgm" in "w" (write/overwrite) mode
    if(f==NULL){
        printf("Error opening file!\n");
        exit(1);
    }
    int i, j;
    fprintf(f,"P2\n%d %d\n255\n",RES,RES); //pbm type 2 (grayscale), resolution (hotizontal, vertical), grayscale step
    for(i=0;i<RES;i++){
        for(j=0;j<RES;j++){
            //printf("%d, %d\n",i+j, arr[i+j]);
            if(j==499) fprintf(f,"%d\n",arr[i][j]); //.pgm requires newline character at end of row
            else fprintf(f,"%d ",arr[i][j]);
        }
    }
    fclose(f);
}
