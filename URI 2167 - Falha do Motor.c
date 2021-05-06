#include <stdio.h>

int main() {
    
    int N_vezes,ctd,N_menor,N_indice;

    scanf("%d",&N_vezes);
    
    int N_valor[N_vezes];

    for(ctd=0;ctd<N_vezes;ctd++){
        scanf("%d",&N_valor[ctd]);
    }
    
    for(ctd=1;ctd<N_vezes;ctd++){
        if (N_valor[ctd] < N_valor[ctd-1]){
            N_indice = ctd+1;
            break;
        }
    }
    
    
    printf("%d\n",N_indice);

    return 0;
}