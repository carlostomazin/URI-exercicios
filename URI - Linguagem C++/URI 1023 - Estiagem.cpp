#include <iostream>
#include <iomanip>

using namespace std;

typedef struct{
    int quant_morad;
    int consumo_total;
    int consumo_p_pessoa;
    int aux;
}city;

void quickSort(city *vetor, int esquerda, int direita){

    int i,j;
    city pivo,aux,aux2;
    i = esquerda;
    j = direita;

    pivo.consumo_p_pessoa = vetor[direita].consumo_p_pessoa;

    if((i == esquerda) && (j == direita)){
        while (i <= j){
            while ((vetor[i].consumo_p_pessoa < pivo.consumo_p_pessoa) && (i < direita)){
                i++;
            }
            while ((vetor[j].consumo_p_pessoa > pivo.consumo_p_pessoa) && (j > esquerda)){
                j--;
            }
            if(i <= j){
                
                aux.consumo_p_pessoa = vetor[i].consumo_p_pessoa;
                vetor[i].consumo_p_pessoa = vetor[j].consumo_p_pessoa;
                vetor[j].consumo_p_pessoa = aux.consumo_p_pessoa;

                aux2.quant_morad = vetor[i].quant_morad;
                vetor[i].quant_morad = vetor[j].quant_morad;
                vetor[j].quant_morad = aux2.quant_morad;
                i++;
                j--;
            }
        }
    }
    if(j > esquerda)
        quickSort(vetor, esquerda, j);
    if(i < direita)
        quickSort(vetor, i, direita);
}

int main(){

    int n,ctd,i;
    int cidade=0;

    cout << fixed << setprecision(2);

    while (cin >> n && n){
        
        city casa[n];
        int aux[n];
        float total_pessoas=0, total_consumo=0;
        
        for(ctd=0; ctd < n; ctd++){
            cin >> casa[ctd].quant_morad >> casa[ctd].consumo_total;
            casa[ctd].consumo_p_pessoa = casa[ctd].consumo_total / casa[ctd].quant_morad;

            total_pessoas += casa[ctd].quant_morad;
            total_consumo += casa[ctd].consumo_total;
        }
        
        for(ctd=0; ctd<n; ctd++){
            if(casa[ctd].consumo_p_pessoa == casa[ctd+1].consumo_p_pessoa){

            }
        }
        
        quickSort(casa,0,n-1);
        
        cout << "Cidade# " << ++cidade << ":\n";
        for(ctd=0; ctd<n; ctd++){
            cout << casa[ctd].quant_morad << "-" << casa[ctd].consumo_p_pessoa << " ";
        }
        cout << "\nConsumo medio: " << total_consumo / total_pessoas << " m3.\n\n";
    }
    
    return 0;
}