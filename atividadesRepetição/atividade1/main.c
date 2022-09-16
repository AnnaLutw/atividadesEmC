#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > 45 || num2> 45){
        int soma = num1 + num2;
        printf("%d", soma);
    }
    else if(num1 >20 && num1 > num2){
            int sub = num1 - num2;
            printf("%d", sub);
    }
    else if(num2 >20 && num2 >num1){
         int sub = num2 - num1;
            printf("%d", sub);
    }
    else if(num1 < 10 && num2 != 0 ){
        int divisao = num1 / num2;
            printf("%d", divisao);

    }
     else if(num2 < 10 && num1 != 0 ){
        int divisao = num2 / num1;
        printf("%d", divisao);
    }
    else{
        int nome;
        printf("Digite seu nome: ");
        scanf("Nome: %d", nome);
    }
    return 0;
}

