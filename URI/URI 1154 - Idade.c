#include <stdio.h>

 
int main() {
 
    int idade;
    float idade_final=0,quant=0;

    while(scanf("%d", &idade) && idade >= 0 ){
        quant++;
        //if (idade<0)
        //    break;
        idade_final += idade;
    }
    printf("%.2f\n",idade_final/quant);

    return 0;
}