#include <stdio.h>
#include <stdlib.h>
//receber vetor como parametro e imprimir seu conteúdo
int main()
{
    int totalVet;
    printf("Digite tamanho do vetor: ");
    scanf("%d", &totalVet);

    int vet[totalVet];

    for(int i=0; i<=totalVet; i++ ){

        printf("digite numeros: ");
        scanf("%d", &vet[i]);
    }

    imprimir(vet);
    return 0;
}
int imprimir (int vet[10]){

    for(int i=0;i<=10; i++ ){

        printf("%d,", vet[i]);
    }
}
