#include <stdio.h>
#define DIM 5
int main()
{
    int n;
    int a[] = {2, 4, 1, 6, 2}, b[5];

    printf("Inserire un numero \n");
    scanf("%d", &n);

    for (int i = 0; i < DIM; i++)
    {
        printf("%d\n", b[i] = 2 + a[i]);
    }
}