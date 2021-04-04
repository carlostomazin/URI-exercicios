#include <stdio.h>

typedef struct _g
{
    int valorGolpe;
    int Ai;
    int Di;
    int Li;
}golpe;


int main() {

    int T,B,ctd;
    golpe poderG;
    golpe poderD;

    scanf("%d",&T);

    for(ctd=1;ctd<=T;ctd++){
        
        scanf("%d",&B);

        scanf("%d %d %d",&poderD.Ai, &poderD.Di, &poderD.Li);
        scanf("%d %d %d",&poderG.Ai, &poderG.Di, &poderG.Li);

        poderG.valorGolpe = ((poderG.Ai + poderG.Di)/2);
        poderD.valorGolpe = ((poderD.Ai + poderD.Di)/2);

        if (poderG.Li % 2 == 0)
            poderG.valorGolpe += B;

        if (poderD.Li % 2 == 0) 
            poderD.valorGolpe += B;
        
        if (poderG.valorGolpe > poderD.valorGolpe)
            printf("Guarte\n");
        else if (poderD.valorGolpe > poderG.valorGolpe)
            printf("Dabriel\n");
        else 
            printf("Empate\n");
    }
    return 0;
}