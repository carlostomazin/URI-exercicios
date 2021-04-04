#include <stdio.h>
#include <math.h>
 
int main() {
 
    double R,pi;
    pi = 3.14159;
    scanf("%lf",&R);
    
    printf("VOLUME = %.3lf",((4/3.0)*pi*pow(R,3)));
    return 0;
}