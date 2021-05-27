#include<stdio.h>

int main (){
    
    int N,ctd;

    scanf("%d",&N);

    for(ctd=1; ctd<=10; ctd ++){
        printf("%d x %d = %d\n",ctd,N,ctd*N);
    }

    return (0);
}