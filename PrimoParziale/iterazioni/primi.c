#include <stdio.h>
int primo(int n)
{
    int conteggio_divisori = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            conteggio_divisori++;
        }
    }
    if (conteggio_divisori == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Inserisci un numero \n");
    scanf("%d", &n);

    printf("I numeri primo minori o uguali a %d\n", n);
    for (int i = 1; i <= n; i++)
    {
        if (primo(i))
        {
            printf("%d ", i);
        }
    }
}