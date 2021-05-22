#include <stdio.h>

typedef struct{
    int quant_morad;
    int consu;
    float consu_p_pess;
}racio;

void insertSort(racio *vetor, int N){
    int i, j,aux2;
    float aux;
    for (i = 1; i < N; i++){
        aux = vetor[i].consu_p_pess;
        aux2 = vetor[i].quant_morad;
        for (j = i - 1; (j >= 0) && (aux < vetor[j].consu_p_pess); j--){
            vetor[j + 1].consu_p_pess = vetor[j].consu_p_pess;
            vetor[j + 1].quant_morad = vetor[j].quant_morad;
        }
        
        vetor[j + 1].consu_p_pess = aux;
        vetor[j + 1].quant_morad = aux2;
    }
}

int main(){
    
    int N,ctd,city=0;

    while (scanf("%d", &N) && N){
        city++;
        racio casa[N];
        float consu_medio=0,quant_moradores=0,quant_consumo=0;

        for(ctd = 0; ctd < N; ctd++){
            scanf("%d",&casa[ctd].quant_morad);
            scanf("%d",&casa[ctd].consu);
            casa[ctd].consu_p_pess = casa[ctd].consu / casa[ctd].quant_morad;

            quant_consumo+= casa[ctd].consu;
            quant_moradores+= casa[ctd].quant_morad;
        }

        consu_medio = quant_consumo / quant_moradores;

        insertSort(casa,N);

        printf("Cidade# %d:\n",city);
        for(ctd = 0; ctd < N; ctd++){
            printf("%d-%0.f ",casa[ctd].quant_morad,casa[ctd].consu_p_pess);
        }
        printf("\nConsumo medio: %.2f m3.\n", consu_medio);
        printf("\n");
    }

    return 0;
}