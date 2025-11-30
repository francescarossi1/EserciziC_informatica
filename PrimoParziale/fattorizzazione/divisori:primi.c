#include <stdio.h>

int primo(int n)
{
    int i;
    int conteggio_divisori;
    conteggio_divisori = 0;
    if (n < 2)
    {
        return 0;
    }
    for (i = 2; i * i <= n; i++)
    {
        if (conteggio_divisori > 0)
        {
            return 0;
        }
        if (n % i == 0)
        {
            conteggio_divisori++;
        }
    }
    if (conteggio_divisori == 0)
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
    int i;
    printf("Inserisci un numero\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (primo(i))
            {
                printf("%d\n", i);
            }
        }
    }
}