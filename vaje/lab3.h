#include "../../cdraw/drawBmp.h"
#define RES 2000 //image resolution, "lahko si tud fulhade nardite"

struct cplx {
    double real;
    double imgn;
};

unsigned char barva(struct cplx b); //calculate color
struct cplx tmp; //part of func();

//constant declaration / fractal seed
const struct cplx c={-0.4,0.6};

void lab3(){
    const float lim = 1.7; //limits of calculation -- lower to zoom in
    clock_t timeStart = clock();
    struct cplx comp;
    static unsigned char slika[RES][RES];
    int i, j;
    for(i=0;i<RES;i++){//fix on imgn part
        comp.imgn=lim-(2.0*lim*i/RES);
        for(j=0;j<RES;j++){ //roll over real parts
            comp.real = (-1)*lim+(2.0*lim*j/RES);
            slika[i][j]=barva(comp);
        }
    }
    clock_t timeEnd = clock();
    printf("Loop gen time: %g s\n",(float)(timeEnd-timeStart)/CLOCKS_PER_SEC);
    timeStart=clock();
    drawBmp(RES,RES,slika,"hello.bmp");
    timeEnd=clock();
    printf("Img gen time:  %g s\n",(float)(timeEnd-timeStart)/CLOCKS_PER_SEC);
}
unsigned char barva(struct cplx b){
    unsigned char i;
    for (i=0;i<256;i++){
        tmp=b;
        b.real = tmp.real*tmp.real-tmp.imgn*tmp.imgn+c.real;
        b.imgn = tmp.imgn*tmp.real+tmp.real*tmp.imgn+c.imgn;
        if(sqrt(b.real*b.real+b.imgn*b.imgn)>2){
            break;
        }
     }
     return 255-i;
}
