#include <iostream>

using namespace std;

int main(){

    double valor;
    int cont=0;

    cin >> valor;
    //add 0.001 a valor para funcionar no uri
    valor+= 0.001;

    cout << "NOTAS:\n";
    
    //R$ 100.00
    while (1){
        if(valor >= 100){
            valor -= 100;
            cont++;
        }else{
            cout << cont << " nota(s) de R$ 100.00\n";
            cont=0;
            break;
        }
    }

    //R$ 50.00
    while (1){
        if(valor >= 50){
            valor -= 50;
            cont++;
        }else{
            cout << cont << " nota(s) de R$ 50.00\n";
            cont=0;
            break;
        }
    }
    
    //R$ 20.00
    while (1){
        if(valor >= 20){
            valor -= 20;
            cont++;
        }else{
            cout << cont << " nota(s) de R$ 20.00\n";
            cont=0;
            break;
        }
    }
    
    //R$ 10.00
    while (1){
        if(valor >= 10){
            valor -= 10;
            cont++;
        }else{
            cout << cont << " nota(s) de R$ 10.00\n";
            cont=0;
            break;
        }
    }
    
    //R$ 5.00
    while (1){
        if(valor >= 5){
            valor -= 5;
            cont++;
        }else{
            cout << cont << " nota(s) de R$ 5.00\n";
            cont=0;
            break;
        }
    }
    
    //R$ 2.00
    while (1){
        if(valor >= 2){
            valor -= 2;
            cont++;
        }else{
            cout << cont << " nota(s) de R$ 2.00\n";
            cont=0;
            break;
        }
    }

    cout << "MOEDAS:\n";

    //R$ 1.00
    while (1){
        if(valor >= 1.00){
            valor -= 1.00;
            cont++;
        }else{
            cout << cont << " moeda(s) de R$ 1.00\n";
            cont=0;
            break;
        }
    }

    //R$ 0.50
    while (1){
        if(valor >= 0.50){
            valor -= 0.50;
            cont++;
        }else{
            cout << cont << " moeda(s) de R$ 0.50\n";
            cont=0;
            break;
        }
    }
    
    //R$ 0.25
    while (1){
        if(valor >= 0.25){
            valor -= 0.25;
            cont++;
        }else{
            cout << cont << " moeda(s) de R$ 0.25\n";
            cont=0;
            break;
        }
    }

    //R$ 0.10
    while (1){
        if(valor >= 0.10){
            valor -= 0.10;
            cont++;
        }else{
            cout << cont << " moeda(s) de R$ 0.10\n";
            cont=0;
            break;
        }
    }
    
    //R$ 0.05
    while (1){
        if(valor >= 0.05){
            valor -= 0.05;
            cont++;
        }else{
            cout << cont << " moeda(s) de R$ 0.05\n";
            cont=0;
            break;
        }
    }

    //R$ 0.01
    while (1){
        if(valor >= 0.01){
            valor -= 0.01;
            cont++;
        }else{
            cout << cont << " moeda(s) de R$ 0.01\n";
            cont=0;
            break;
        }
    }

    return 0;
}