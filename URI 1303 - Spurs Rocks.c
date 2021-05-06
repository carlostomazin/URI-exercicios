#include <stdio.h>

typedef struct {
    int numero;
    int pontos;
    int marcados;
    int tomados;
}nba;

int jogos(const void *pa, const void *pb){
    const int *p1 = pa;
    const int *p2 = pb;
    return *p1 - *p2;
}

void quickSort(nba *vetor, int esquerda, int direita){

    int i,j,pivo,aux;
    int aux2;

    i = esquerda;
    j = direita;

    pivo = vetor[direita].pontos;

    if((i == esquerda) && (j == direita)){
        while (i <= j){
            while ((vetor[i].pontos < pivo) && (i < direita)){
                i++;
            }
            while ((vetor[j].pontos > pivo) && (j > esquerda)){
                j--;
            }
            if(i <= j){
                aux = vetor[i].pontos;
                vetor[i].pontos = vetor[j].pontos;
                vetor[j].pontos = aux;
                i++;
                j--;
            }
        }
    }
    if(j < esquerda)
        quickSort(vetor, esquerda, j);
    if(i > direita)
        quickSort(vetor, i, direita);
}

int main(){ 
    
    int n=0;
    int instancia=0;

    while (scanf("%d",&n) && n){
        int x=0,y=0,z=0,w=0,ctd;    
        int quant_jogos=0;
        int classificacao[n];
        nba time[n];

        quant_jogos = n*(n - 1) / 2;

        for(ctd=0; ctd < n; ctd++){
            time[ctd].pontos=0;
            time[ctd].numero=0;
            time[ctd].marcados=0;
            time[ctd].tomados=0;
        }
        
        for(ctd = 0; ctd < quant_jogos; ctd++){
            scanf("%d %d %d %d",&x,&y,&z,&w);
            if(time[x-1].numero == 0){
                time[x-1].numero = x;
            }
            if(time[z-1].numero == 0){
                time[z-1].numero = z;
            }
            time[x-1].marcados += y;
            time[x-1].tomados += w;
            time[z-1].marcados += w;
            time[z-1].tomados += y;

            if(y - w > 0){
                time[x-1].pontos += 2;
                time[z-1].pontos += 1;
            }else
                time[z-1].pontos += 2;
                time[x-1].pontos += 1;
        }
        //jogos();
        quickSort(time,0,n-1);
        
        instancia++;
    
        printf("Instancia %d\n",instancia);

        /*DECRESCENTE*/
        // for(ctd = n-1; ctd >= 0 ; ctd--){
        //     printf("%d ",time[ctd].numero);
        // }

        for(ctd = 0; ctd < n ; ctd++){
            printf("%d ",time[ctd].pontos);
        }

        printf("\n");
    }

    return 0;
}