#include <stdio.h>
#include <stdlib.h>
//receber e imprimir nome
int main()
{
    char nome [50];
    char sobrenome [50];

    printf("\nDigite Seu nome: ");
    scanf("%s", nome);
    printf("\nDigite Seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("Seu nome é: %s %s\n", nome, sobrenome);
    return 0;
}
