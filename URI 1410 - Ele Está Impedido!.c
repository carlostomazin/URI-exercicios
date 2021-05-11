#include <stdio.h>

void insertSort(int *vetor, int N){
    int aux, i, j;
    for (i = 1; i < N; i++)
    {
        aux = vetor[i];
        for (j = i - 1; (j >= 0) && (aux < vetor[j]); j--){
            vetor[j + 1] = vetor[j];
        }
        
        vetor[j + 1] = aux;
    }
}

int main() {
  
  int A,D,ctd;

  while(scanf("%d %d",&A,&D) && A && D){
    int atc[A],dfs[D];

    for(ctd=0; ctd<A; ctd++){
      scanf("%d",&atc[ctd]);
    }
    for(ctd=0; ctd<D; ctd++){
      scanf("%d",&dfs[ctd]);
    }

    insertSort(atc, A);
    insertSort(dfs, D);

    if(atc[0]<dfs[0] || atc[0]<dfs[1])
        printf("Y\n");
    else
        printf("N\n");
  }

  return 0;
}