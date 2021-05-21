#include <stdio.h>

int main(){

    int N[100],ctd,maior,posMaior=1;

    scanf("%d",&N[0]);
    maior = N[0];

    for(ctd=1; ctd<100; ctd++){
        scanf("%d",&N[ctd]);
        if(N[ctd] > maior){
            maior = N[ctd];
            posMaior = ctd+1;
        }
    }

    printf("%d\n%d\n",N[posMaior-1],posMaior);

    return 0;
}