#include <stdio.h>
#include <string.h>
#include "rubrica.h"

#define DIM 20

int main()
{
    char scelta;
    int dl = 0; // inizializza dimensione logica
    Contatto rubrica[DIM];

    do
    {
        printf("Cosa vuoi fare?\n");
        printf("a) Stampa l'intera rubrica\n");
        printf("b) Inserisci un contatto in rubrica\n");
        printf("c) Cerca un contatto in rubrica\n");
        printf("q) Quit\n");
        printf("Scelta: ");
        scanf(" %c", &scelta); // spazio per ignorare invio precedente

        switch (scelta)
        {
        case 'a':
            if (dl == 0)
                printf("Rubrica vuota!\n");
            else
                stampaRubrica(rubrica, dl);
            break;

        case 'b':
            if (dl < DIM)
            {
                inserisciNuovoContatto(rubrica, &dl);
                printf("Contatto inserito!\n");
            }
            else
            {
                printf("Rubrica piena!\n");
            }
            break;

        case 'c':
            cercaContatto(rubrica, dl);
            break;

        case 'q':
            printf("Uscita dal programma\n");
            break;

        default:
            printf("Scelta non valida!\n");
        }

    } while (scelta != 'q');

    return 0;
}
