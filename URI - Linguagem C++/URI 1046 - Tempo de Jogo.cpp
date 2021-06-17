#include <iostream>

using namespace std;

int main(){

    int inicio,final;

    cin >> inicio >> final;

    if (final < inicio){
        inicio = 24 - inicio;
        final = final + inicio;
        cout << "O JOGO DUROU " << final << " HORA(S)\n";
    }else if (final == inicio){
        cout << "O JOGO DUROU 24 HORA(S)\n";
    }else{
        cout << "O JOGO DUROU " << abs(inicio - final) << " HORA(S)\n";
    }

    return 0;
}