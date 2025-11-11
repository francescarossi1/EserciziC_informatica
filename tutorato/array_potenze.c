#include <stdio.h>
#define DIM 10

int eleva(int base, int esponente)
{
    int risultato = 1;
    for (int i = 0; i < esponente; i++)
    {
        risultato *= base;
    }
    return risultato;
}

int main()
{

    int dl;
    do
    {
        printf("Inserire la dimensione dell'array: \n");
        scanf("%d", &dl);
    } while (dl <= 0 || dl > DIM);

    int numeri[dl];
    int potenze[dl];

    for (int i = 0; i < dl; i++)
    {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    for (int i = 0; i < dl; i++)
    {
        if (numeri[i] % 2 == 0)
        {
            potenze[i] = eleva(numeri[i], 2);
        }
        else
        {
            potenze[i] = eleva(numeri[i], 3);
        }
    }

    printf("Potenze dei valori inseriti: \n");
    for (int i = 0; i < dl; i++)
    {
        printf("%d\n", potenze[i]);
    }
}