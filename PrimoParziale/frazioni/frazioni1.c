#include <stdio.h>

typedef struct
{
    int num;
    int den;
} Frazione;

Frazione frazione(int n, int d)
{
    Frazione f;

    f.num = n;
    f.den = d;

    return f;
}

Frazione inputFrazione(void)
{
    int n, d;
    Frazione f;

    printf("Numeratore: ");
    scanf("%d", &n);
    printf("Denominatore: ");
    scanf("%d", &d);

    f = frazione(n, d);

    return f;
}

void stampaFrazionaria(Frazione f)
{
    printf("%d/%d\n", f.num, f.den);
}

void stampaDecimale(Frazione f)
{
    printf("%.2f\n", (float)f.num / f.den);
}

int main()
{

    Frazione f1;
    Frazione f2;
    f1 = frazione(2, 3);
    f2 = inputFrazione();
    stampaFrazionaria(f2);
    stampaDecimale(f2);
}