#include <stdio.h>

int doppio(int a)
{
    return a * 2;
}

int main()
{
    int i, j;
    for (i = 0; i <= 10; i++)
    {
        j = doppio(i);
        printf("%d\n", j);
    }
}