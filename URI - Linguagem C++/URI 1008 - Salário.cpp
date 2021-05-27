#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int num_func,hor_func;
    float sal_func;

    cin >> num_func >> hor_func >> sal_func;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << num_func << endl << "SALARY = U$ " << hor_func * sal_func << endl;

    return 0;
}