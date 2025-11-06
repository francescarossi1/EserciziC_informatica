#include <stdio.h>
#define DIM 5
int main()
{
    int a[DIM] = {4, -2, 3, 0, 1};
    int b[DIM];

    int dl; // dimensione logica array
    dl = 0;

    for (int i = 0; i < DIM; i++)
    {
        if (a[i] > 0)
        {
            b[dl] = a[i];
            dl++;
        }
    }
    for (int i = 0; i < dl; i++)
    {
        printf("%d\n", b[i]);
    }
}