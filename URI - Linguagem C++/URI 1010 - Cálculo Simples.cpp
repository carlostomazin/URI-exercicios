#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int pec1,pec2,unit1,unit2;
    float val1,val2;

    cin >> pec1 >> unit1 >> val1;
    cin >> pec2 >> unit2 >> val2;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << (unit1 * val1) + (unit2 * val2) << endl;

    return 0;
}