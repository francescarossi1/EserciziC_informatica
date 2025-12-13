#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaVeicoli.h"

int main(int argc, char *argv[])
{
    FILE *pf, *scrittura;
    Record r;
    Lista listaparcheggi;
    char t1[8], t2[8], t3[8];

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

    // scrittura
    scrittura = fopen("ultimi3.txt", "wt");
    if (pf == NULL)
    {
        printf("Errore apertura file\n");
        exit(2);
    }

    nuovaLista(&listaparcheggi);

    // accesso al file
    while (fread(&r, sizeof(Record), 1, pf) == 1)
    {
        aggiorna(&listaparcheggi, r);
    }

    stampa(listaparcheggi);

    // parte 2

    fseek(pf, 0, SEEK_END); // va alla fine del file

    while (strcmp(t3, "") == 0)
    {
        if (fseek(pf, -sizeof(Record), SEEK_CUR) != 0)
        {
            break;
        }
        fread(&r, sizeof(Record), 1, pf); // legge l'ultimo record
        if (strcmp(r.targa, t1) != 0 && strcmp(r.targa, t2) != 0 && strcmp(r.targa, t3) != 0)
        {
            if (strcmp(t1, "") == 0)
            {
                strcpy(t1, r.targa);
            }
            else if (strcmp(t2, "") == 0)
            {
                strcpy(t2, r.targa);
            }
            else
            {
                strcpy(t3, r.targa);
            }
        }
        fseek(pf, -sizeof(Record), SEEK_CUR);
    }
    if (strcmp(t1, "") != 0)
        fprintf(scrittura, "%s\n", t1);
    if (strcmp(t2, "") != 0)
        fprintf(scrittura, "%s\n", t2);
    if (strcmp(t3, "") != 0)
        fprintf(scrittura, "%s\n", t3);

    // chiusura
    fclose(pf);
    fclose(scrittura);

    return 0;
}