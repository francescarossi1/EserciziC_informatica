#include <stdio.h>
int main()
{
    int base, altezza;
    printf("inserire la misura della base del rettangolo: ");
    scanf("%d", &base);
    printf("inserire la misura dell?altezza del rettangolo: ");
    scanf("%d", &altezza);

    printf("il perimetro del rettangolo è %d e la sua area è %d", (base + altezza) * 2, base * altezza);
}