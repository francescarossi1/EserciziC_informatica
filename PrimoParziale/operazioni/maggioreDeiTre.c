#include <stdio.h>
int main()
{
    int a, b, c;
    printf("inserisci un numero 1\n");
    scanf("%d\n", &a);
    printf("inserisci un numero 2\n");
    scanf("%d\n", &b);
    printf("inserisci un numero 3\n");
    scanf("%d\n", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d è il maggiore\n", a);
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf("%d è il maggiore\n", b);
        }
    }
    else if (c > a)
    {
        if (c > a)
        {
            printf("%d è il maggiore\n", c);
        }
    }
}