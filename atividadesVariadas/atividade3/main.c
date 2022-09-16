#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Calcular distancia Euclidiana
int main()
{
    int x1 =0, x0 = 0;
    int y1 = 0, y0=0;
    double result;

    printf("Digite as cordenadas do primeiro ponto \n");
    scanf ("%d %d",&x1,&x0);
    printf("Digite as cordenadas do segundo ponto \n");
    scanf ("%d %d",&y1,&y0);

    result = distancia(x1, x0,y1,y0);
    printf("\nDistancia Euclidiana: %f", result);

    return 0;
}
int distancia(int x1, int x0, int y1, int y0){

    return sqrt((x1-x0)^2 + (y1-y0)^2);
}
