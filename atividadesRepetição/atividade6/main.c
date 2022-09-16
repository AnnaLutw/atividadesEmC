#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int seq=0;
    int a=12, b=5, c=1;
    printf("Digite valor de N: ");
    scanf("%d", &n);

   while(seq<n){
    seq= (a+b)-c;
    c=b;
    b=a;
    a=seq;
    printf("%d,", seq);
   }
    return 0;
}

//1 5 12 16 23 27
