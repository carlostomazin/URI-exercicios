#include <stdio.h>

int main(){

    float vet[6],media=0;
    int ctd,par=0;

    for(ctd=0; ctd<6; ctd++){
        scanf("%f",&vet[ctd]);
        if(vet[ctd] > 0){
            par++;
            media += vet[ctd];
        }    
    }

    printf("%d valores positivos\n",par);
    printf("%.1f\n",media/par);

   return 0;
}