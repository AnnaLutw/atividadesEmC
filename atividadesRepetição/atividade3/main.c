#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario=0;
    double prestacao=0;
    double resultado=0;
    printf("Digire o salario: ");
    scanf("%lf", &salario);

    printf("Digire a presta��o: ");
    scanf("%lf", &prestacao);

    resultado = 40*salario/100;

    if(prestacao > resultado){
        printf("Emprestimo n�o concedido");
    }
    else{
        printf("Valor Concedido");
    }

    return 0;

}
