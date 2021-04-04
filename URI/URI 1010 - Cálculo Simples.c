#include <stdio.h>
 
int main() {
 
    int codigoP1,numeroP1,codigoP2,numeroP2;
    float valorUntP1,valorUntP2,x;
    
    scanf("%d %d %f",&codigoP1,&numeroP1,&valorUntP1);
	scanf("%d %d %f",&codigoP2,&numeroP2,&valorUntP2);
    
    x = ((numeroP1*valorUntP1)+(numeroP2*valorUntP2));
    
    printf("VALOR A PAGAR: R$ %.2f\n",x);
    return 0;
}
