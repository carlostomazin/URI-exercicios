#include <stdio.h>
#include <math.h>

typedef struct _d{
  float A;
  float B;
  float C;
  float R1;
  float R2;
  float delta;
}valores;

int main() {
 
    valores x;
    
    scanf("%f",&x.A);
    scanf("%f",&x.B);
    scanf("%f",&x.C);

    //calculo DELTA
    x.delta = (pow(x.B,2)) - 4 * x.A * x.C;

    if (x.delta < 0 || x.A == 0){
        printf("Impossivel calcular\n");
    }else{
        //calculo Bhaskara
        //R1
        x.R1 = (-x.B + (sqrt(x.delta))) / (2 * x.A);
        //R2
        x.R2 = (-x.B - (sqrt(x.delta))) / (2 * x.A);

        printf("R1 = %.5f\n",x.R1);
        printf("R2 = %.5f\n",x.R2);
    }
    

    return 0;
}