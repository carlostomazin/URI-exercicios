#include <stdio.h>

int main() {
  
  int N,ctd,C=0,R=0,S=0,total=0,aux;
  char tipo;

  scanf("%d",&N);

  for(ctd=0; ctd<N; ctd++){
    
    scanf("%d %c",&aux,&tipo);
    total+=aux;
    
    if(tipo == 'C'){
        C+= aux;
    }else if(tipo == 'R'){
        R+= aux;
    }else{
        S+= aux;
    }
    
  }

  printf("Total: %d cobaias\n",total);
  printf("Total de coelhos: %d\n",C);
  printf("Total de ratos: %d\n",R);
  printf("Total de sapos: %d\n",S);

  printf("Percentual de coelhos: %.2f %%\n",(float)(C*100)/total);
  printf("Percentual de ratos: %.2f %%\n",(float)(R*100)/total);
  printf("Percentual de sapos: %.2f %%\n",(float)(S*100)/total);

  return 0;
}