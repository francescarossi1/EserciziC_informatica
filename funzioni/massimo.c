#include <stdio.h>
int massimo(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b;
    printf("Inserisci un primo valore intero \n");
    scanf("%d", &a);
    printf("Inserisci un secondo valore intero \n");
    scanf("%d", &b);

    printf("il massimo  è %d\n", massimo(a, b));

    return 0;
}
