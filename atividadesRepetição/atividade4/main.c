#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num1, num2,raizCubica=0;

    printf("Digite dois numeros: ");
    scanf("%lf %lf", &num1, &num2);

    if(num1> num2){
        raizCubica= pow(num2,1.0/3.0);
        printf("%.2lf\n", raizCubica);
    }
    else if (num2 > num1){
        raizCubica= pow(num1,1.0/3.0);
        printf("%.2lf\n", raizCubica);
    }
    if(num2>num1){
        double lg = log(num2)/log(num1);
        printf("%lf", lg);
    }
    if(num1>num2){
        double lg = log(num2)/log(num1);
        printf("%lf", lg);

    }
    return 0;
}
