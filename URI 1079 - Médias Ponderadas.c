#include<stdio.h>

int main (){
    
    int N,ctd;
    float val1,val2,val3;

    scanf("%d",&N);

    for(ctd=0; ctd<N; ctd ++){
        scanf("%f",&val1);
        scanf("%f",&val2);
        scanf("%f",&val3);

        printf("%.1f\n",((val1*2) + (val2*3) + (val3*5)) / 10);
    }

    return (0);
}