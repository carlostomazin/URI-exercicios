#include <stdio.h>

int main(){
    
    int X,ctd;
    
    scanf("%d",&X);
    
    if(X % 2 == 0){
        X--;
    }

    for(ctd = 1; ctd <= X; ctd++){
        printf("%d\n",ctd++);
    }   

    return 0; 
}