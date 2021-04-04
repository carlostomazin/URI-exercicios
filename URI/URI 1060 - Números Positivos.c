//19413949		1060	Números Positivos	Accepted	C	0.000	01/09/2020 14:28:20
#include <stdio.h>
 
int main() {
 
    int ctd,quant=0;
    float valores[6];

    for(ctd=1;ctd<=6;ctd++)
    {
        scanf("%f",&valores[ctd]);
        if (valores[ctd]>0){
            quant++;
        }
    }
    printf("%d valores positivos",quant);

    return 0;
}