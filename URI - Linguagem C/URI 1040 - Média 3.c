#include <stdio.h>

int main(){
 
    float N1, N2, N3, N4,media,media_f,nota_ex;

    scanf("%f %f %f %f",&N1, &N2, &N3, &N4);
   
    media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;
    
    printf("Media: %.1f\n",media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(media < 5.0){
        printf("Aluno reprovado.\n");
    }else{
        printf("Aluno em exame.\n");
        scanf("%f",&nota_ex);
        printf("Nota do exame: %.1f\n",nota_ex);
        
        media_f = (nota_ex + media) / 2;
        if(media_f >= 5.0){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",media_f);
    }

   return 0;
}