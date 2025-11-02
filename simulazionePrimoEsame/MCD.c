#include <stdio.h>
int mcd(int a, int b)
{
    while (a != b)
    {

        if (a < b)
        {
            return b = b - a;
        }
        else
        {
            return a = a - b;
        }
        return a;
    }
}
int main()
{
    int m;
    int i, j;
    printf("Inserisci un numero\n");
    scanf("%d", &m);
    for (i = 1; i <= m; i++)
    {
        for (j = 1; i <= m; i++)
        {
            printf("%.3f\n", 1 / (float)(mcd(i, j)));
        }
    }
}