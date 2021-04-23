#include <stdio.h>

int main() {

  int hora1,min1,hora2,min2;
  int min;

  while(1){

  printf("Digite hora e minutos (##:##)\n");
  scanf("%d %d %d %d",&hora1, &min1, &hora2, &min2);

  if (!hora1 && !min1 && !hora2 && !min2)
    break;
  
  if (hora1 > hora2 || hora1 == hora2 && min1 > min2)
    hora2 += 24;

  min = (hora2*60 + min2) - (hora1*60 + min1);

  printf("%d\n", min);

  
  }
  return 0;
}
