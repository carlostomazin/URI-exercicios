#include <stdio.h>

int main() {
  
  int num[5],par=0,ctd;

  for(ctd=0; ctd<5; ctd++){
    scanf("%d",&num[ctd]);
    if(num[ctd] % 2 == 0)
      par++;
  }

  printf("%d valores pares\n",par);
  
  return 0;
}