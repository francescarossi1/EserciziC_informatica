#include <stdio.h>
int main()
{
    int x;
stampa:
    printf("Inserisci un numero: \n");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("%d\n", x * 2);
        goto stampa;
    }
}