#include <stdio.h>
#define DIM 10
int main()
{
    int a[DIM], x;
    int cont;
    printf("Inserisci 10 elementi\n");
    for (int i = 0; i < DIM; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Inserisci un numero intero \n");
    scanf("%d", &x);
    printf("Il valore %d compare nelle posizioni: \n", x);
    for (int i = 0; i < DIM; i++)
    {
        if (a[i] == x)
        {
            printf("%d ", i);
            cont++;
        }
    }
    printf("\n");
    if (cont == 0)
    {
        printf("L'elemento %d non è presente\n", x);
    }
}