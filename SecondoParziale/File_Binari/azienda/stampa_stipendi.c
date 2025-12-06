#include <stdio.h>
#include <stdlib.h>
#include "dipendente.h"

#define DIM 5


int main()
{
    Dipendente dipendenti[DIM];
    FILE *pf;
    int dl;

    if ((pf = fopen("stipendi.dat", "rb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    dl = fread(dipendenti, sizeof(Dipendente), DIM, pf);
    for (int i = 0; i < dl; i++)
    {
        printf("%s %f\n", dipendenti[i].nome, dipendenti[i].stipendio);
    }

    if (fclose(pf))
    {
        printf("Errore chiusura file\n");
        exit(2);
    }

    return 0;
}