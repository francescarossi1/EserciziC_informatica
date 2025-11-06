#include <stdio.h>
#define DIM 5
int main()
{
    int a[DIM];
    int p = 1;

    printf("Inserisci 5 valori\n");
    for (int i = 0; i < DIM; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < DIM; i++)
    {
        p = p * a[i];
    }
    printf("Prodotto %d", p);
}