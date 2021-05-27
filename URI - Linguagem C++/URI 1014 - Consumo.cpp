#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int disc_total;
    float combustivel;

    cin >> disc_total >> combustivel;

    cout << fixed << setprecision(3);
    cout << disc_total / combustivel << " km/l" << endl;

    return 0;
}