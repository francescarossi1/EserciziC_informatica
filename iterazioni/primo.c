#include <stdio.h>
int primo(int n)
{
    int conteggio_divisori = 0;
    for (int i = 2; i <= n - 1; i++)
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
    int n, conteggio_divisori = 0;
    printf("Inserisci un numero \n");
    scanf("%d", &n);

    if (primo(n))
    {
        printf("%d è un numero primo \n", n);
    }
    else
    {
        printf("%d non è un numero primo \n", n);
    }
}