#include <iostream>
#include <iomanip>
#include <math.h>

#define pi 3.14159

using namespace std;

int main(){
    
    float raio;

    cin >> raio;

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << (4.0/3) * pi * (pow(raio,3)) << endl;

    return 0;
}