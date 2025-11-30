#include <stdio.h>
int valoreAssoluto(int n)
{
    if (n >= 0)
    {
        return n;
    }
    else
    {
        return -n;
    }
}

int main()
{
    int a;
    printf("Inserisci un valore intero \n");
    scanf("%d", &a);
    printf("Valore assoluto è %d\n", valoreAssoluto(a));

    return 0;
}
