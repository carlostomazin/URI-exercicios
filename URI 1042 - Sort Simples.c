#include <stdio.h>

int main(){
    
    int vet[3],aux[3],temp,ctd,i;

    for(ctd=0; ctd<3; ctd++){
        scanf("%d",&vet[ctd]);
        aux[ctd] = vet[ctd];
    }

    for(ctd=0; ctd < 3; ctd++){
        for(i=0; i < 3; i++){
            if(vet[ctd] < vet[i]){
                temp = vet[ctd];
    	        vet[ctd] = vet[i];
                vet[i] = temp;
            }
        }
    }

    for(ctd=0; ctd<3; ctd++){
        printf("%d\n",vet[ctd]);
    }

    printf("\n");
    for(ctd=0; ctd<3; ctd++){
        printf("%d\n",aux[ctd]);
    }

    return 0;
}