#include <stdio.h>

int massimo(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

int massimo3(int a, int b, int c)
{
    return massimo(massimo(a, b), c);
}

int main()
{
    int a, b, c;
    printf("Inserisci un primo valore intero: ");
    scanf("%d", &a);
    printf("Inserisci un secondo valore intero: ");
    scanf("%d", &b);
    printf("Inserisci un terzo valore intero: ");
    scanf("%d", &c);

    printf("Il massimo è %d\n", massimo3(a, b, c));

    return 0;
}
