#include <stdio.h>
int mcd(int a, int b)
{
    while (a != b)
    {

        if (a < b)
        {
             b = b - a;
        }
        else
        {
             a = a - b;
        }
        return a;
    }
}
int main(void)
{
    int m;
    int i, j;
    printf("Inserisci un numero\n");
    scanf("%d", &m);
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("%.3f\n", 1 / (float)(mcd(i, j)));
            
        }
        printf("\n");
    }
    return 0;
}