#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "orario.h"

int main()
{
    Orari calendario[5][4];
    char scelta;

    inizializza(calendario);

    do
    {
        printf("Inserisci scelta\n");
        printf("a) stampa\n");
        printf("b) stampa singolo giorno scelto dall'utente\n");
        printf("c) modifica orario\n");
        printf("q) quit \n");
        scanf(" %c", &scelta);

        switch (scelta)
        {
        case 'a':
            stampa(calendario);
            break;

        case 'b':
            stampaGiorno(calendario);
            break;

        case 'c':
            modifica(calendario);
            break;

        case 'q':
            exit(1);
            break;

        default:
            printf("Scelta non valida!\n");
        }

    } while (scelta != 'q');

    return 0;
}
