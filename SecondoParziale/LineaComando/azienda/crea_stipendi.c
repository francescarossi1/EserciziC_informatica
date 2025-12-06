#include <stdio.h>
#include <stdlib.h>
#include "dipendente.h"

#define DIM 5

int main(int argc, char *argv[])
{
    Dipendente dipendenti[DIM] = {{"Rossi", 1750.0}, {"Bianchi", 2160.0}, {"Verdi", 1300.0}, {"Gialli", 2300.0}, {"Neri", 1000}};
    FILE *pf;

    if (argc != 2)
    {
        printf("Linea di comando non corretta: %s nome_file\n", argv[0]);
        exit(3);
    }

    if ((pf = fopen(argv[1], "wb")) == NULL)
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