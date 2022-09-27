#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inte =10;
    int real = 9;
    char ch = 'a';

    int *i = &inte;
    int *r = &real;
    char *c = &ch;

    printf("VALOR ANTES\n");
    printf("Inteiro: %d\n", *i);
    printf("real: %d\n", *r);
    printf("char: %c\n", *c);

    *i+= 9;
    *r += 5;
    *c += 2;

    printf("VALOR DEPOIS\n");
    printf("Inteiro: %d\n", *i);
    printf("real: %d\n", *r);
    printf("char: %c\n", *c);


    return 0;
}
