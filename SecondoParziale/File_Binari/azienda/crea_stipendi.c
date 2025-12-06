#include <stdio.h>
#include <stdlib.h>
#include "dipendente.h"

#define DIM 5


int main()
{
    Dipendente dipendenti[DIM] = {{"Rossi", 1750.0}, {"Bianchi", 2160.0}, {"Verdi", 1300.0}, {"Gialli", 2300.0}, {"Neri", 1000}};
    FILE *pf;

    if ((pf = fopen("stipendi.dat", "wb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    fwrite(dipendenti, sizeof(Dipendente), DIM, pf);

    if (fclose(pf))
    {
        printf("Errore chiusura file\n");
        exit(2);
    }

    return 0;
}