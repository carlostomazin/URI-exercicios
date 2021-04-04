#include <stdio.h>
typedef struct _n
{
    int cem,cinquenta,vinte,dez,cinco,dois,um,cont;
}numero;

void calcNum(int a1,numero a2){

    a2.cem = a1;
    
    while (1){

        a2.cont = 0;
        if (a2.cem >= 100){
            a2.cont++;
            a2.cem -= 100;
        } else {
            printf ("%d nota(s) de R$ 100,00\n",a2.cont);
        }

        a2.cont = 0;
        a2.cinquenta = a2.cem;
        if (a2.cinquenta >= 50){
            a2.cont++;
            a2.cinquenta -= - 50;
        } else {
            printf ("%d nota(s) de R$ 50,00\n",a2.cont);
        }

        a2.cont = 0;
        a2.vinte = a2.cinquenta;
        if (a2.vinte >= 20){
            a2.cont++;
            a2.vinte -= 20;
        } else {
            printf ("%d nota(s) de R$ 20,00\n",a2.cont);
        }

        a2.cont = 0;
        a2.dez = a2.vinte;
        if (a2.dez >= 10){
            a2.cont++;
            a2.dez -= 10;
        } else {
            printf ("%d nota(s) de R$ 10,00\n",a2.cont);
        }

        a2.cont = 0;
        a2.cinco = a2.dez;
        if (a2.cinco >= 5){
            a2.cont++;
            a2.cinco -= 5;
        } else {
            printf ("%d nota(s) de R$ 5,00\n",a2.cont);
        }

        a2.cont = 0;
        a2.dois = a2.cinco;
        if (a2.dois >= 2){
            a2.cont++;
            a2.dois -= 2;
        } else {
            printf ("%d nota(s) de R$ 2,00\n",a2.cont);
        }

        a2.cont = 0;
        a2.um = a2.dois;
        if (a2.um >= 1){
            a2.cont++;
            a2.um -= 1;
        } else {
            printf ("%d nota(s) de R$ 1,00\n",a2.cont);
            break;
        }
    }
}

int main() {

    int num,total;
    numero numer;

    scanf ("%d",&num);

    printf ("%d\n",num);

    calcNum(num,numer);

    return 0;
}