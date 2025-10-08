#include <stdio.h>
int main()
{
    int g, m, a, jd, n0, n1, n2, n3;
    int settimana;
    printf("inserire il giorno: ");
    scanf("%d", &g);
    printf("inserire il mese: ");
    scanf("%d", &m);
    printf("inserire l'anno: ");
    scanf("%d", &a);

    n0 = (m - 14) / 12;
    n1 = 1461 * (a + 4800 + n0) / 4;
    n2 = 367 * (m - 2 - 12 * n0) / 12;
    n3 = 3 * (a + 4900 + n0) / 400;

    jd = n1 + n2 - n3 + g - 32075;

    printf("data inserita %d/%d/%d, giorno giuliano: %d, n0:%d, n1:%d, n2:%d, n3:%d\n", g, m, a, jd, n0, n1, n2, n3);

    settimana = jd % 7;
    printf("Giorno della settimana: \n");
    switch (settimana)
    {
    case 0:
        printf("lunedì\n");
        break;
    case 1:
        printf("martedì\n");
        break;
    case 2:
        printf("mercoledì\n");
        break;
    case 3:
        printf("giovedì\n");
        break;
    case 4:
        printf("venerdì\n");
        break;
    case 5:
        printf("sabato\n");
        break;
    case 6:
        printf("domenica\n");
        break;
    }
}