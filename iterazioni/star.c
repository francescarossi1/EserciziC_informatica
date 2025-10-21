#include <stdio.h>
int main()
{
    int contatore = 0;
star:
    printf("*\n");
    contatore++;
    if (contatore < 5)
    {
        goto star;
    }
    printf("\n\n");
}