#include <stdio.h>

int main(){
    int N, ctd, num;

    scanf("%d", &N);

    for (ctd = 0; ctd < N; ctd++){
        scanf("%d", &num);

        if(num == 0){
            printf("NULL\n");
        }else if (num % 2 == 0){
            printf("EVEN");
            printf(" ");
            if(num > 0){
                printf("POSITIVE\n");
            }else{
                printf("NEGATIVE\n");
            }
        }else{
            printf("ODD");
            printf(" ");
            if(num > 0){
                printf("POSITIVE\n");
            }else{
                printf("NEGATIVE\n");
            }
        }
            
    }

    return 0;
}