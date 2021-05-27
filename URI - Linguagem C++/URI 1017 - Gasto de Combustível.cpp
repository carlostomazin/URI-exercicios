#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int tempo,distancia;

    cin >> tempo >> distancia;

    cout << fixed << setprecision(3);
    cout << (float) (distancia * tempo ) / 12 << endl;

    return 0;
}