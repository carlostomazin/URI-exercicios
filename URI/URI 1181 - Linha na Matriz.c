#include <stdio.h>

int main() {

    int L,ctd,i;
    char T;
    float M[12][12],soma=0,media=0;

    scanf("%d",&L);
   // fflush(stdin);
    scanf("%c",&T);

    for(ctd=0;ctd<12;ctd++){
        for(i=0;i<12;i++){
            scanf("%f",&M[ctd][i]);
        }
    }

    for(i=0;i<12;i++){
        soma = soma + M[L][i];
    }

    if(T=='S'){
        printf("%.1f\n",soma);
    }else{
        media = soma / 12;
        printf("%.1f\n",media);
    }

    return 0;
}