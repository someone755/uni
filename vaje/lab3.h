/** c - seme fraktala (c=i || c=-0.5+0.5i itd.)
 *
 *  Endgoal: preko celega RES×RES delamo f(z) in preverjamo če abs{f256(z)}<2 oz pri katerem abs{fn(z)}>2
 */
#define RES 50 //image resolution, "lahko si tud fulhade nardimo"
struct cplx {
    double real;
    double imgn;
};
struct cplx func(struct cplx z);
unsigned char barva(struct cplx b);

//constant declaration / fractal seed
struct cplx c={0,1};

void lab3(){
    struct cplx comp;
    unsigned char slika[RES][RES];
    int i, j;
    for(i=RES/2.0;i>=(-1)*RES/2.0;i--){//fix on imgn part
        comp.imgn=1.7/RES * i;
        //printf("i: %d\n",i);
        for(j=-RES/2.0;j<=RES/2.0;j++){ //roll over real parts
            //printf("j: %d\n",j);
            comp.real = 1.7/RES * j;
            slika[i][j]=barva(comp);
            //printf("slika: %d\n",slika[i][j]);
            //getchar();
        }
        //printf("i,j: %d\n",slika[i][j]);
        //getchar();
    }
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
    /** i=0 -> i<255 -(yes)-> barva = 255-i
     *    ^       ˇno      yes^
     *    |      z=P(z) -> |z|>2
     *    \----------------<ˇno
     */
}

struct cplx func(struct cplx z){
    struct cplx out;
    // f(z)=z*z+c
    out.real = z.real*z.real-z.imgn*z.imgn+c.real;
    out.imgn = z.imgn*z.real+z.real*z.imgn+c.imgn;
    return out;
};

/**             ˇ--------------------------------------------------------------------\
 * i i=0 -> i<DIM -(yes)-> zRe=spodnja_meja+i(zg-sp)/(DIM-1) -> j=0 -> j<DIM -(ne)-> /
 *                                         ˛------- j++ ---------^      ˇyes
 *                               slika[i][j]=barva(z,c) <- zIm=sp+j(zg-sp)/(DIM-1)
 */
