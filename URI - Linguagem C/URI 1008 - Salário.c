//19168206		1008	Salário	Accepted	C	0.000	13/08/2020 23:50:15
#include<stdio.h>

int main (){

    int nFuncionario,hFuncionario;
    float vPorHora;

    scanf("%d %d %f",&nFuncionario,&hFuncionario,&vPorHora);
    printf("NUMBER = %d\n",nFuncionario);
    printf("SALARY = U$ %.2f\n",vPorHora*hFuncionario);

    return (0);
}