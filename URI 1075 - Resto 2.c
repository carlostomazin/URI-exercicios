#include<stdio.h>

int main (){
    
    int N,ctd;

    scanf("%d",&N);

    for(ctd=1; ctd<=10000; ctd ++){
        if(ctd % N == 2){
            printf("%d\n",ctd);
        }
    }

    return (0);
}