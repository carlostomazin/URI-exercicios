#include <stdio.h>

int main(){

    int N,ctd,i,x,y;
    int soma=0,aux;

    scanf("%d",&N);

    for(ctd=0; ctd<N; ctd++){

        scanf("%d %d",&x,&y);

        if(x < y){
            aux = x;
            x = y;
            y = aux;
        }

        if(y+1 == x || y == x){
            soma = 0;
        }else{
            for(i=x-1; i>=y+1; i--){
                if(i % 2 != 0){
                    soma+=i;
                }
            }
        }

        printf("%d\n",soma);
        soma = 0;

    }
    
    return 0;
}