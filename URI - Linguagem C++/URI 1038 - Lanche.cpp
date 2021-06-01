#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int num, cod;

    cout << fixed << setprecision(2);
    cin >> cod >> num;

    switch (cod){
    case 1:
        cout << "Total: R$ " << (float) num * 4 << endl;
        break;
    case 2:
        cout << "Total: R$ " << (float) num * 4.5 << endl;
        break;
    case 3:
        cout << "Total: R$ " << (float) num * 5 << endl;
        break;
    case 4:
        cout << "Total: R$ " << (float) num * 2 << endl;
        break;
    case 5:
        cout << "Total: R$ " << (float) num * 1.5 << endl;
        break;
    }

    return 0;
}