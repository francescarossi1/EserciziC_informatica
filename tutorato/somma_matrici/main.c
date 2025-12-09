#include <stdio.h>
#include <stdlib.h>
#include "matrici.h"

int main()
{
    int a[3][3] = {
        {2, 3, 6},
        {5, 1, 2},
        {5, 5, 5}};
    int b[3][3] = {
        {9, 9, 9},
        {2, 3, 4},
        {8, 7, 3}};

    stampaSomma(a, b);
}