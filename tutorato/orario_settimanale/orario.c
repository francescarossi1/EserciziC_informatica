#include <stdio.h>
#include <string.h>
#include "orario.h"

void inizializza(Orari calendario[5][4])
{
    Giorno giorni[5] = {Lunedì, Martedì, Mercoledì, Giovedì, Venerdì};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            calendario[i][j].giorno = giorni[i];
            strcpy(calendario[i][j].slot, "Vuoto");
        }
    }
}

void stampa(Orari calendario[5][4])
{
    char *nomiGiorni[5] = {"Lunedì", "Martedì", "Mercoledì", "Giovedì", "Venerdì"};

    // stampa in formato tabellare
    printf("Giorno\t\tSlot1\tSlot2\tSlot3\tSlot4\n");
    printf("-----------------------------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%-10s\t", nomiGiorni[i]);

        for (int j = 0; j < 4; j++)
        {
            printf("%-6s\t", calendario[i][j].slot);
        }

        printf("\n");
    }
}

void stampaGiorno(Orari calendario[5][4])
{
    char *nomiGiorni[5] = {"Lunedì", "Martedì", "Mercoledì", "Giovedì", "Venerdì"};
    int giorno;

    do
    {
        printf("Quale giorno vuoi stampare? (1 = lun, 2 = mar, ..., 5 = ven)\n");
        scanf("%d", &giorno);

        if (giorno < 1 || giorno > 5)
            printf("Errore: giorno non valido, riprova.\n");

    } while (giorno < 1 || giorno > 5);

    giorno--;

    printf("\n%s:\n", nomiGiorni[giorno]);

    for (int j = 0; j < 4; j++)
    {
        printf("  Slot %d: %s\n", j + 1, calendario[giorno][j].slot);
    }

    printf("\n");
}

void modifica(Orari calendario[5][4])
{
    int giorno, slot;
    char inserimento[30];

    do
    {
        printf("Che giorno vuoi modificare da 1 a 5 (1=lun, 2=mar, ...)\n");
        scanf("%d", &giorno);

        if (giorno < 1 || giorno > 5)
            printf("Errore: giorno non valido, riprova.\n");

    } while (giorno < 1 || giorno > 5);

    do
    {
        printf("Che slot vuoi modificare da 1 a 4 \n");
        scanf("%d", &slot);

        if (slot < 1 || slot > 4)
            printf("Errore: slot non valido, riprova.\n");

    } while (slot < 1 || slot > 4);

    giorno--;
    slot--;

    printf("Cosa vuoi inserire? (max 9 caratteri)\n");
    scanf("%s", inserimento);

    strcpy(calendario[giorno][slot].slot, inserimento);

    printf("Slot aggiornato correttamente!\n");
}
