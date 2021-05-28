#include <iostream>

using namespace std;

int main(){

    int n;

    cin >> n;
    
    cout << n / 3600 << ":";
    cout << (n % 3600) / 60<< ":";
    cout << (n % 3600) % 60 << endl;

    return 0;
}