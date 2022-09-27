#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Valor de a: ");
    scanf("%d", &a);

    printf("Valor de b: ");
    scanf("%d", &b);

    int *c = &a;
    int *d = &b;

    if(c > d){
        printf("%d", *c);
    }
    else{
        printf("%d", *d);
    }

    return 0;
}
