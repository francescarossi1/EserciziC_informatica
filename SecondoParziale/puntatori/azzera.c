#include <stdio.h>

void azzera(int *p)
{
    *p = 0;
}

int main()
{
    int x = 1;
    printf("valore iniziale di x: %d\n", x);
    azzera(&x);
    printf("valore finale di x: %d\n", x);
    return 0;
}