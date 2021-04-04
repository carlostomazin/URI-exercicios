#include <stdio.h>

int main () { 
    int N, M, lin, colun, p = 0; 
    
    while (scanf ("%d %d", &N, &M) != EOF){ 
        
        int vet[N][M];

        for (lin = 0; lin < N; lin++)
            for (colun = 0; colun < M; colun++){
                scanf ("%d", &vet[lin][colun]);
            if (vet[lin][colun] == 1) vet[lin][colun] = 9; 
            }

        for (lin = 0; lin < N; lin++)
            for (colun = 0; colun < M; colun++)
                if (vet[lin][colun] != 9) {
                    if (lin > 0) if (vet[lin-1][colun] == 9) p++;
                    if (lin < N) if (vet[lin+1][colun] == 9) p++;
                    if (colun > 0) if (vet[lin][colun-1] == 9) p++; 
                    if (colun < M) if (vet[lin][colun+1] == 9) p++; 
                    vet[lin][colun] = p;
                    p = 0;
                }               

        for (lin = 0; lin < N; lin++, printf ("\n"))
            for (colun = 0; colun < M; colun++)
                printf ("%d", vet[lin][colun]);

        }

return 0;
}

