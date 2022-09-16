#include <stdio.h>
#include <stdlib.h>

//Fatorial recursivo
int main()
{

    int valor = 0;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    int resultado = fatorial(valor);

    printf("Fatorial: %d \n ",resultado);
    return 0;
}

int fatorial(int val){
    int fat = 0;

if(val == 0)
    return 1;

else{
    fat = val * fatorial (val -1);
    return fat;
}
}
