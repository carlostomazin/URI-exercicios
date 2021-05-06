#include <stdio.h>

int main() {

  int x[10],ctd;

  for(ctd=0;ctd<10;ctd++){
    scanf("%d",&x[ctd]);

    if(x[ctd] <= 0){
      x[ctd] = 1;
    }

    printf("X[%d] = %d\n",ctd,x[ctd]);
  }
  
  return 0;
}
