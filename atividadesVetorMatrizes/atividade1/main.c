#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Quantos numeros: ");
    scanf("%d", &n);
    int soma=0;

    int vet [n];
    for(int i=0; i<n;i++){
        printf("Digite um numero ");
        scanf("%d", &vet[i]);
        //if()
        soma = 2*i+1;
    }
            printf("%d", soma);

    return 0;
}
