#include <stdio.h>

int main(){
    
    int C,ctd,N;

    scanf("%d",&C);

    for(ctd=1;ctd<=C;ctd++){
        scanf("%d",&N);
        if (N % 2 == 0){
            N = 0;
            printf("%d\n",N);
        }else{
            N = 1;
            printf("%d\n",N);
        }
    }
 
    return 0;
}