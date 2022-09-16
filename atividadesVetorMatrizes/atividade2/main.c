#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Quantos numeros: ");
    scanf("%d", &n);
    int vet [n];
    int menor=0;
    int salva=0;

    for(int i=0; i<n;i++){
        printf("Digite um numero ");
        scanf("%d", &vet[i]);
        salva = vet[i];
        if(vet[i] < salva){
            salva = vet[i];

        }
    }
    printf("%d", salva);
    return 0;
}
