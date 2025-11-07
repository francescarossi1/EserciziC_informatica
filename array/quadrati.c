#include <stdio.h>
#define DIM 10
int main()
{
    int n;
    int a[DIM];

    printf("Inserire un numero \n");
    scanf("%d", &n);

    for (int i = 0; i < DIM; i++)
    {
        a[i] = (n + 1 + i) * (n + 1 + i);
    }
    for (int i = 0; i < DIM; i++)
    {
        printf("%d\n", a[i]);
    }
}