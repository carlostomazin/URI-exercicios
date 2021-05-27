#include <iostream>
#include <iomanip>
#include <math.h>

#define pi 3.14159

using namespace std;

int main(){
    
    float a,b,c;

    cin >> a >> b >> c;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << (a*c) / 2 << endl;
    cout << "CIRCULO: " << pi * pow(c,2) << endl;
    cout << "TRAPEZIO: " << ((a+b) * c) / 2 << endl;
    cout << "QUADRADO: " << pow(b,2) << endl;
    cout << "RETANGULO: " << (a * b) << endl;

    return 0;
}