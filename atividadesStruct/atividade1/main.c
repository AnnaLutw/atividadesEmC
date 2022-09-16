#include <stdio.h>
#include <stdlib.h>

//Struct recebendo e imprimindo os dados armazenados
struct Pessoa{
    char nome[50];
    int idade;
    double renda;

};
int main()
{
    struct Pessoa p;

    printf("Digite nome:");
    scanf("%s", p.nome);

    printf("Digite idade:");
    scanf("%s", &p.idade);

    printf("Digite renda:");
    scanf("%lf", &p.renda);

    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Renda: %.2f\n", p.renda);

    return 0;
}
