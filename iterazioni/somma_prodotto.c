#include <stdio.h>

int valore_input()
{
    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    return n;
}

int main()
{
    int i, somma = 0, prodotto = 1;

    printf("Somma di 5 numeri\n");
    for (i = 0; i < 5; i++)
    {
        somma += valore_input();
    }
    printf("La somma è %d\n", somma);

    printf("Prodotto di 5 numeri\n");
    for (i = 0; i < 5; i++)
    {
        prodotto *= valore_input();
    }
    printf("Il prodotto è %d\n", prodotto);

    return 0;
}
