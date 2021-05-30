#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

    double A,B,C,delta,R1,R2;

    cin >> A >> B >> C;

    cout << fixed << setprecision(5);

    delta = (pow(B,2)) - 4 * A * C;

    if (delta < 0 || A == 0){
        cout << "Impossivel calcular\n";
    }else{
        R1 = (-B + (sqrt(delta))) / (2 * A);
        R2 = (-B - (sqrt(delta))) / (2 * A);

        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }

    return 0;
}