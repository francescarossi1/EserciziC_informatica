#include <stdio.h>
#define DIM 5
int main()
{
    int a[DIM], m;
    printf("Inserisci 5 valori\n");
    for (int i = 0; i < DIM; i++)
    {
        scanf("%d", &a[i]);
    }
    m = 0;
    for (int i = 0; i < DIM; i++)
    {
        if (a[i] > a[m])
        {
            m = i;
        }
    }
    printf("Indice del massimo %d\n", m);
    printf("Massimo %d\n", a[m]);
}