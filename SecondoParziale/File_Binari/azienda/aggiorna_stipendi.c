#include <stdio.h>
#include <stdlib.h>
#include "dipendente.h"

#define DIM 5

int main()
{
    Dipendente d;
    FILE *pf;
    int dl;

    if ((pf = fopen("stipendi.dat", "r+b")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    while (fread(&d, sizeof(Dipendente), 1, pf) == 1)
    {
        if (d.stipendio < 2000.0)
        {
            d.stipendio = d.stipendio * 1.1;
        }
        fseek(pf, -sizeof(Dipendente), SEEK_CUR);
        fwrite(&d, sizeof(Dipendente), 1, pf);
        fflush(pf);
    }

    if (fclose(pf))
    {
        printf("Errore chiusura file\n");
        exit(2);
    }

    return 0;
}