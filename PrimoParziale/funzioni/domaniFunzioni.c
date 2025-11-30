#include <stdio.h>
int bisestile(int a)
{
    return a % 400 == 0 || (a % 4 == 0 && a % 100 != 0);
}

int giorni_del_mese(int m, int a)
{
    int gm;
    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        return 30;
    }
    else if (m == 2)
    {
        if (bisestile(a))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        return 31;
    }
}

int valida(int g, int m, int a)
{
    if (m < 1 || m > 12)
    {
        return 0;
    }
    if (g < 1 || g > giorni_del_mese(m, a))
    {
        return 0;
    }
    return 1;
}

int main()
{
    int g, m, a;
    int gm;

    printf("Inserisci giorno mese e anno\n");
    scanf("%d %d %d", &g, &m, &a);

    if (!valida(g, m, a))
    {
        printf("data non valida\n");
        return -1;
    }
    else
    {

        if (g == 31 && m == 12)
        {
            printf("%d %d %d\n", 1, 1, a + 1);
        }
        else if (g == giorni_del_mese(m, a)) // ultimo giorno del mese
        {
            printf("%d %d %d\n", 1, m + 1, a);
        }
        else
        {
            printf("%d %d %d\n", g + 1, m, a);
        }

        return 0;
    }
}