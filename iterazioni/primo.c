#include <stdio.h>
int main()
{
    int n, conteggio_divisori = 0;
    printf("Inserisci un numero \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            conteggio_divisori++;
        }
    }
    if (conteggio_divisori == 2)
    {
        printf("%d è un numero primo \n", n);
    }
    else
    {
        printf("%d non è un numero primo \n", n);
    }
}