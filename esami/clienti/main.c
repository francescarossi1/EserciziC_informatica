#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaClienti.h"

int main(int argc, char *argv[])
{
    FILE *pf;
    Record r;
    Lista listaclienti;

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

    nuovaLista(&listaclienti);

    // accesso al file
    while (fread(&r, sizeof(Record), 1, pf) == 1)
    {
        // printf("%d %d %s %f\n", r.mese, r.anno, r.consumo, r.cf);
        aggiorna(&listaclienti, r);
    }

    // chiusura
    fclose(pf);

    stampa(listaclienti);
    return 0;
}