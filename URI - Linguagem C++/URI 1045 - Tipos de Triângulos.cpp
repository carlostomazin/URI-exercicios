#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double a,b,c,aux;
    
    cin >> a >> b >> c;

    if (a < b){aux = a; a = b; b = aux;}
    if (b < c){aux = b; b = c; c = aux;}
    if (a < b){aux = a; a = b; b = aux;}

    if (a >= b + c){
        cout << "NAO FORMA TRIANGULO\n";
    }else if (pow(a,2) == pow(b,2) + pow(c,2)){
        cout << "TRIANGULO RETANGULO\n";
    }else if (pow(a,2) > pow(b,2) + pow(c,2)){
        cout << "TRIANGULO OBTUSANGULO\n";
    }if (pow(a,2) < pow(b,2) + pow(c,2)){
        cout << "TRIANGULO ACUTANGULO\n";
    }
    if ( a == b && b == c){
        cout << "TRIANGULO EQUILATERO\n";
    }else if ( a == b || b == c){
        cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}