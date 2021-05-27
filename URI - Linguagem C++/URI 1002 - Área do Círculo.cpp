#include <iostream>
#include <iomanip>
#include <math.h>
#define pi 3.14159

using namespace std;

int main(){
    
    double raio,area;

    cin >> raio;

    area = pi * pow(raio,2);

    cout<<fixed<<setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}