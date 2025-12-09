#include <stdio.h>
#include <stdlib.h>
#include "matrici.h"

int stampaSomma(int a[3][3], int b[3][3])
{
    int somma[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            somma[i][j] = a[i][j] + b[i][j];
            printf("%d ", somma[i][j]);
        }
        printf("\n");
    }
}