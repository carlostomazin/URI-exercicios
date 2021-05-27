#include <iostream>

using namespace std;

int main(){
    
    int a,b,c,maior;

    cin >> a >> b >> c;

    maior = (a + b + abs(a-b)) / 2;
    
    cout << (maior + c + abs(maior-c)) / 2 << " eh o maior" << endl;

    return 0;
}