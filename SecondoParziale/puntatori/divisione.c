#include <stdio.h>

void divisione(int dividendo, int divisore, int *pq, int *pr)
{
    if (divisore != 0)
    {
        *pq = dividendo / divisore;
        *pr = dividendo % divisore;
    }
}

int main()
{
    int a = 22, b = 7;
    int q, r;
    divisione(a, b, &q, &r);
    printf("%d %d\n", q, r);
    return 0;
}