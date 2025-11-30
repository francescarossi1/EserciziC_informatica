#include <stdio.h>
int main()
{
    int dividendo, divisore, quoziente, m;
    printf("Inserisci dividendo\n");
    scanf("%d", &dividendo);
    printf("Inserisci divisore\n");
    scanf("%d", &divisore);
    m = dividendo;
    quoziente = 0;
    while (m >= divisore)
    {
        m -= divisore;
        quoziente++;
    }
    printf("Quoziente %d\n", quoziente);
    printf("Resto %d\n", m);
}