#include <stdio.h>
#include <stdlib.h>
/*
    Na voljo imamo n kosov ograje po 1m. Iz teh kosov želimo
    postaviti ogrado pravokotne oblike. Želimo si, da bi bila
    površina kar največja. Napiši program, ki določi dolžino
    stranice take ograde.
*/
int main() {
    int i,n,p,p_max=0,i_max;
    printf("Koliko ograj imas?\n");
    scanf("%d",&n);
    for(i=1; i<n/2; i++){
     p=i*((n/2)-i);
     printf("%d x %d = %d\n", i, n/2 - i, p);
     if(p>p_max){
        p_max=p;
        i_max=i;
     }
    }
    printf("Postavi ograjo %d x %d.\n", i_max, n/2 - i_max);
    return 0;
}
