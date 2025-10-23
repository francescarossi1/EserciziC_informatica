#include <stdio.h>
int main()
{
    int a, m = 0;
    printf("Inserisci numero \n");
    scanf("%d", &m);
    for (int i = 0; i < 5; i++)
    {
        printf("Inserisci numero\n");
        scanf("%d", &a);
        m = (m >= a ? m : a);
        /*if (a > m)
        {
            m = a;
        }
        else
        {
            m = m;
        }*/
    }
    printf("Massimo %d\n", m);
}