#include <stdio.h>
#include <math.h>

int main(){

    int N,ctd;
    double aux;

    scanf("%d",&N);

    for(ctd=1; ctd<=N; ctd++){
        if(ctd % 2 == 0){
            aux = ctd;
            printf("%d^2 = %.0f\n",ctd,pow(aux,2));
        }
    }

    return 0;
}