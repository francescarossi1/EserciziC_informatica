#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[50], i, dl;
    FILE *pf;

    if ((pf = fopen("interi.dat", "rb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    dl = fread(a, sizeof(int), 50, pf);
    for (i = 0; i < dl; i++)
    {
        printf("%d\n", a[i]);
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(2);
    }

    return 0;
}