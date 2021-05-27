#include <iostream>

using namespace std;

int f(int,int);

int main(){

    int a,b;

    cin >> a;
    cin >> b;

    int x = f(a,b);
    
    cout << "X = " << x << "\n";

    return 0;
}

int f(int a, int b){
    int aux;
    aux = a + b;
    return aux;
}