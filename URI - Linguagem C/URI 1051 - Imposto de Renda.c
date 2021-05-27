#include <stdio.h>

int main(){
    
    float salario;

    scanf("%f",&salario);

    if(salario <= 2000.00){
        printf("Isento\n");
    }else if(salario >= 2000.01 && salario <= 3000.00){
        printf("R$ %.2f\n",(salario - 2000) * 0.08);
    }else if(salario >= 3000.01 && salario <= 4500.00){
        printf("R$ %.2f\n",(salario - 3000.00) * 0.18 + 80.00);
    }else if(salario > 4500.00){
        printf("R$ %.2f\n",(salario - 4500) * 0.28 + 350);
    }

    return 0;
}