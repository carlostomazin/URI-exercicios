//19414870		1143	Quadrado e ao Cubo	Accepted	C	0.000	01/09/2020 15:10:08
#include <stdio.h>
#include <math.h>

int main() {
 
    double N;
    int ctd;

    scanf("%lf",&N);
    for (ctd=1;ctd<=N;ctd++){
        printf("%.0lf %.0lf %.0lf\n",(double)ctd,pow((double)ctd,2),pow((double)ctd,3));
    }
 
    return 0;
}