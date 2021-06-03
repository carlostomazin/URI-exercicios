#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float a,b,c;

    cout << fixed << setprecision(1);

    cin >> a >> b >> c;

    if( (b-c < a && a < b+c) && (a-c < b && b < a+c) && (a-b < c && c < a+b)){
        cout << "Perimetro = " << a+b+c << endl;
    }else{
        cout <<  "Area = " << (a + b)/ 2 * c << endl;
    }

    return 0;
}