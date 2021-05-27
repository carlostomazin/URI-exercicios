#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    char nome[30];
    float sal_fix,total_vendas;
    

    cin >> nome >> sal_fix >> total_vendas;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << sal_fix + (total_vendas * 0.15) << endl;

    return 0;
}