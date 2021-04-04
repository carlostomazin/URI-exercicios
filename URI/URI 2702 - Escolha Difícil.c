#include <stdio.h>

int main() {


    //================== PADRÃO =======================//
    /*
    int frango,bife,massa,all=0;
    int frango_pedido,bife_pedido,massa_pedido;

    scanf("%d %d %d",&frango, &bife, &massa);
    scanf("%d %d %d",&frango_pedido, &bife_pedido, &massa_pedido);

    if (frango_pedido > frango)
        all += frango_pedido-frango;

    if (bife_pedido > bife)
        all += bife_pedido-bife;

    if (massa_pedido > massa)
        all += massa_pedido-massa;

    printf("%d\n",all);
    */

    //================== VETOR =======================//
  
  int frango[3],frango_pedido[3],ctd,all=0;

    for(ctd=1;ctd<=3;ctd++){
        scanf("%d",&frango[ctd]);
    }
    for(ctd=1;ctd<=3;ctd++){
      
        scanf("%d",&frango_pedido[ctd]);

        if (frango_pedido[ctd]>frango[ctd])
            all += frango_pedido[ctd]-frango[ctd];
    }

    printf("%d\n",all);


    return 0;
}