#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    int maior=0;

    for(int i=0; i<10;i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

    }
    for(int i=0; i<10;i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    printf("%d", maior);
    return 0;
}
