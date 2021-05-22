#include <stdio.h>

int main(){

    int senha = 2002;
    int tentativa;
    
    while (scanf("%d",&tentativa) && tentativa != senha){
        printf("Senha Invalida\n");
    }

    printf("Acesso Permitido\n");
    
    return 0;
}