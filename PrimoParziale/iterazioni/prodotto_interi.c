#include <stdio.h>
int pari(int a)
{
    return a % 2 == 0;
}
int main()
{
    int prodotto, n, i;
    printf("Inserisci un numero intero\n");
    scanf("%d", &n);
    prodotto = 1;
    for (i = 1; i <= n; i++)
    {
        if (pari(i))
        {
            prodotto = prodotto * i;
        }
    }
    printf("Il prodotto è %d\n", prodotto);
}