#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float N1, N2, N3, N4,media,media_f,nota_ex;

    cout << fixed << setprecision(1);
    
    cin >> N1 >> N2 >> N3 >> N4;

    media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;

    cout << "Media: " << media << endl;

    if(media >= 7.0){
        cout << "Aluno aprovado.\n";
    }else if(media < 5.0){
        cout << "Aluno reprovado.\n";
    }else{
        cout << "Aluno em exame.\n";
        cin >> nota_ex;
        //printf("Nota do exame: %.1f\n",nota_ex);
        cout << "Nota do exame: " << nota_ex << endl;
        media_f = (nota_ex + media) / 2;
        if(media_f >= 5.0){
            cout << "Aluno aprovado.\n";
        }else{
            cout << "Aluno reprovado.\n";
        }
        cout << "Media final: " << media_f << endl;
    }
    return 0;
}