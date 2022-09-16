#include <stdio.h>
#include <stdlib.h>
struct Livros{
    char titulo[50];
    char autor[50];
    char assunto[50];
    int id;

};
int main()
{
    struct Livros l[5];

    for(int i=0; i<= 5; i++){

        printf("Digite titulo:");
        scanf("%s", l[i].titulo);

        printf("Digite autor:");
        scanf("%s", l[i].autor);

        printf("Digite assunto:");
        scanf("%s", l[i].assunto);

         printf("Digite ID:");
        scanf("%s", &l[i].id);

    }
    for(int i=0; i<=5;i++){

        printf("\ntitulo: %s\n", l[i].titulo);
        printf("\nAutor: %d\n", l[i].autor);
        printf("\nAssunto: %.2f\n", l[i].assunto);
        printf("\nID: %d\n", l[i].id);

    }
    return 0;
}
