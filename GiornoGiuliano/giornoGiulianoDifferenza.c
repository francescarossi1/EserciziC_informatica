#include <stdio.h>
int main()
{
    int g1, m1, a1, jd1, n01, n11, n21, n31;
    int g2, m2, a2, jd2, n02, n12, n22, n32;
    int diff;
    printf("PRIMO inserire il giorno: ");
    scanf("%d", &g1);
    printf("inserire il mese: ");
    scanf("%d", &m1);
    printf("inserire l'anno: ");
    scanf("%d", &a1);

    printf("SECONDO inserire il giorno: ");
    scanf("%d", &g2);
    printf("inserire il mese: ");
    scanf("%d", &m2);
    printf("inserire l'anno: ");
    scanf("%d", &a2);
    n01 = (m1 - 14) / 12;
    n11 = 1461 * (a1 + 4800 + n01) / 4;
    n21 = 367 * (m1 - 2 - 12 * n01) / 12;
    n31 = 3 * (a1 + 4900 + n01) / 400;

    jd1 = n11 + n21 - n31 + g1 - 32075;

    n02 = (m2 - 14) / 12;
    n12 = 1461 * (a2 + 4800 + n02) / 4;
    n22 = 367 * (m2 - 2 - 12 * n02) / 12;
    n32 = 3 * (a2 + 4900 + n02) / 400;

    jd2 = n12 + n22 - n32 + g2 - 32075;

    diff = jd1 - jd2;

    printf("prima data inserita %d/%d/%d, giorno giuliano: %d, n0:%d, n1:%d, n2:%d, n3:%d\n", g1, m1, a1, jd1, n01, n11, n21, n31);
    printf("seconda data inserita %d/%d/%d, giorno giuliano: %d, n0:%d, n1:%d, n2:%d, n3:%d\n", g2, m2, a2, jd2, n02, n12, n22, n32);
    printf("differenza %d\n", diff);
}