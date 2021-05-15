#include <stdio.h>


int main(){
    
    int X,ctd;

    scanf("%d",&X);

    if(X % 2 == 0){
        X++;
    }

    printf("%d\n",X);
    for(ctd=1; ctd<=5; ctd++){
        printf("%d\n",X+=2);
    }

    return 0;
}