#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    FILE *pf;

    if ((pf = fopen("interi.dat", "rb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    /*while (1)
    {
        fread(&n, sizeof(int), 1, pf);
    }*/

    while (fread(&n, sizeof(int), 1, pf) == 1)
    {
        printf("%d\n", n);
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(2);
    }

    return 0;
}