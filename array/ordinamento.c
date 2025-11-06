#include <stdio.h>
#define DIM 5
int main()
{
    int m, a[DIM], dl, i, j;

    printf("Inserisci 5 valori\n");
    for (dl = 0; dl < DIM; dl++)
    {
        scanf("%d", &m);
        j = dl;
        while (j > 0 && m < a[j - 1])
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = m;
    }
    printf("Array ordinato\n");
    for (i = 0; i < dl; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}