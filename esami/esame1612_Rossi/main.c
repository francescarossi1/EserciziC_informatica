#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaStudenti.h"

int main(int argc, char *argv[])
{
    FILE *pf;
    Record r;
    Lista listaStudenti;

    if (argc != 2)
    {
        printf("Uso: %s fileRilevamenti", argv[0]);
        exit(1);
    }

    // apertura
    pf = fopen(argv[1], "rb");
    if (pf == NULL)
    {
        printf("Errore apertura file %s\n", argv[1]);
        exit(2);
    }

    nuovaLista(&listaStudenti);

    // accesso al file
    while (fread(&r, sizeof(Record), 1, pf) == 1)
    {
        aggiorna(&listaStudenti, r);
    }

    stampa(listaStudenti);

    // chiusura
    fclose(pf);

    return 0;
}