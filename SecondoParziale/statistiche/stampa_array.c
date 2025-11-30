#include <stdio.h>
#include <stdlib.h>

#define DIM 10

int main()
{
    int a[DIM];
    printf("Inserisci 10 valori\n");
    for (int i = 0; i < DIM; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Valori\n");
    for (int i = 0; i < DIM; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}