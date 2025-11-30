#include <stdio.h>
int main()
{
    int prodotto = 0, m, n;
    printf("Inserisci due numeri\n");
    scanf("%d", &m);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        prodotto += m;
    }
    printf("Risualtato %d\n", prodotto);
}