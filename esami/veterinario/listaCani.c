#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaCani.h"

void nuovaLista(Lista *pl)
{
    *pl = NULL;
}

void ins_testa(Lista *pl, Dato d)
{
    Nodo *aux;
    aux = (Nodo *)malloc(sizeof(Nodo));
    aux->dato = d;
    aux->next = *pl; // valore della l del main
    *pl = aux;
}

void aggiorna(Lista *pl, Record r)
{
    while (*pl != NULL && (*pl)->dato.chip != r.chip)
    {
        pl = &(*pl)->next;
    }

    if (*pl == NULL)
    {
        // Cane non presente: lo inserisco
        Dato d;
        d.chip = r.chip;
        d.cimurro = 0;
        d.epatite = 0;
        d.parvovirosi = 0;

        if (r.tipologiaVaccino == 'C')
            d.cimurro = 1;
        else if (r.tipologiaVaccino == 'E')
            d.epatite = 1;
        else if (r.tipologiaVaccino == 'P')
            d.parvovirosi = 1;

        ins_testa(pl, d);
    }
    else
    {
        // Cane trovato: aggiorno il vaccino
        if (r.tipologiaVaccino == 'C')
            (*pl)->dato.cimurro = 1;
        else if (r.tipologiaVaccino == 'E')
            (*pl)->dato.epatite = 1;
        else if (r.tipologiaVaccino == 'P')
            (*pl)->dato.parvovirosi = 1;
    }
}

void stampaNonVaccinati(Lista l)
{
    while (l != NULL)
    {
        printf("%d:", l->dato.chip);

        if (l->dato.cimurro == 0)
            printf(" cimurro");
        if (l->dato.epatite == 0)
            printf(" epatite");
        if (l->dato.parvovirosi == 0)
            printf(" parvovirosi");

        printf("\n");
        l = l->next;
    }
}
