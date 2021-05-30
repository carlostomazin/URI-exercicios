#include <iostream>

using namespace std;

int main(){

    int idade;

    cin >> idade;

    cout << idade / 365 << " ano(s)" << endl;
    cout << (idade - 365 * (idade / 365)) / 30 << " mes(es)" << endl;
    cout << (idade - 365 * (idade / 365)) % 30 << " dia(s)" << endl;

    return 0;
}