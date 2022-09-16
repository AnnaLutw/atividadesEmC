#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    printf("Digite valor de N: ");
    scanf("%d", &n);

    if(n!=0){
        while(n >0){
            if(n%2 != 0){
                printf("%d\n", n);
            }

                    n--;
        }
    }
    return 0;
}
