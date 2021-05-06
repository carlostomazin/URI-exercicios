#include <stdio.h>

int main(){
    
    int X,i,ctd;

    scanf("%d",&X);

    if (X/2 == 0){
        i = 1;
        ctd = 6;
        while (ctd == 6)
        {
            printf("%d",X+i);
            i++;
            ctd--;
        }
        
    }

    return 0;
}