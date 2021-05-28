#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int aux;
    int cem=0,cinquenta=0,vinte=0,dez=0,cinco=0,dois=0,um=0;

    cin >> aux;

    cout << aux << endl;

    while (1){
        if (aux >= 100){
            aux -= 100;
            cem++;
        }else{
            cout << cem << " nota(s) de R$ 100,00" << endl;
            break;
        }
    }
    
    while (1){
        if (aux >= 50){
            aux -= 50;
            cinquenta++;
        }else{
            cout << cinquenta << " nota(s) de R$ 50,00" << endl;
            break;
        }
    }

    while (1){
        if (aux >= 20){
            aux -= 20;
            vinte++;
        }else{
            cout << vinte << " nota(s) de R$ 20,00" << endl;
            break;
        }
    }

    while (1){
        if (aux >= 10){
            aux -= 10;
            dez++;
        }else{
            cout << dez << " nota(s) de R$ 10,00" << endl;
            break;
        }
    }

    while (1){
        if (aux >= 5){
            aux -= 5;
            cinco++;
        }else{
            cout << cinco << " nota(s) de R$ 5,00" << endl;
            break;
        }
    }

    while (1){
        if (aux >= 2){
            aux -= 2;
            dois++;
        }else{
            cout << dois << " nota(s) de R$ 2,00" << endl;
            break;
        }
    }

    while (1){
        if (aux >= 1){
            aux -= 1;
            um++;
        }else{
            cout << um << " nota(s) de R$ 1,00" << endl;
            break;
        }
    }

    return 0;
}