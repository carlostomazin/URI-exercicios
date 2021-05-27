#include <stdio.h>

int main(){

    int n,ctd,x,y;
    
    scanf("%d",&n);

    for(ctd=0; ctd<n; ctd++){

        scanf("%d %d",&x, &y);

        if(y == 0){
            printf("divisao impossivel\n");
        }else{
            printf("%.1f\n",(float)x/y);
        }
    }
    return 0;
}