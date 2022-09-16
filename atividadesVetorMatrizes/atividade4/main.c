#include <stdio.h>
#include <stdlib.h>
//Soma da diagonal de uma matriz
int soma(int ma[5][5]){
    int total = 0;

    for(int i=0; i<=5; i++){
        total += ma[i][i];
    }

    return total;
}

int main()
{
    int tam = 5;
    int matriz [tam][tam];
    int result;

    for(int i=0; i<= tam; i++){
        for(int j=0; j<=tam; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf ("%d\n", &matriz[i][j]);
        }
    }

    result = soma(matriz);
    printf("A soma da diagonal é: %d", result);
    return 0;
}

