#include <stdio.h>
 
int main() {
 
    int num;
    
    scanf("%d",&num);
    
    if (num < 0 || num > 100){
        print("Fora de intervalo\n");
    }else if(num > 0 && num < 25){
            printf("Intervalo [0,25]");
    //else if
        
    return 0;
}