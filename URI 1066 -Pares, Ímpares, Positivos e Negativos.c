#include <stdio.h>

int main(){
    
    int vet[5];
    int ctd,par=0,impar=0,posit=0,negat=0;

    for(ctd=0; ctd<5; ctd++){
        scanf("%d", &vet[ctd]);
    }

    for(ctd=0; ctd<5; ctd++){

        if(vet[ctd] % 2 == 0){
            par++;
        }else{
            impar++;
        }

        if(vet[ctd] > 0){
            posit++;
        }else if (vet[ctd] < 0){
            negat++;
        }
    }

    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",impar);
    printf("%d valor(es) positivo(s)\n",posit);
    printf("%d valor(es) negativo(s)\n",negat);

    return 0;
}