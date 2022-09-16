#include <stdio.h>
#include <stdlib.h>
struct Pessoa{
    char nome[50];
    int idade;
    double renda;

};
int main()
{
    struct Pessoa p[5];

    for(int i=0; i<= 5; i++){

        printf("Digite nome:");
        scanf("%s", p[i].nome);

        printf("Digite idade:");
        scanf("%s", &p[i].idade);

        printf("Digite renda:");
        scanf("%lf", &p[i].renda);

    }
    for(int i=0; i<=5;i++){

        printf("Nome: %s\n", p[i].nome);
        printf("Idade: %d\n", p[i].idade);
        printf("Renda: %.2f\n", p[i].renda);
    }
    return 0;
}
