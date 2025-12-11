#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaClienti.h"

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
    while (*pl != NULL && strcmp((*pl)->dato.cf, r.cf) != 0)
    {
        pl = &(*pl)->next;
    }
    if (*pl != NULL && strcmp((*pl)->dato.cf, r.cf) == 0) // se trovo cliente aggiorno
    {
        (*pl)->dato.consumo_totale += r.consumo;
        (*pl)->dato.addebito_totale += 25.0 + 0.16643 * r.consumo;
    }
    else // se non trovo cliente creo nuovo nodo e lo inserisco nella lista
    {
        Dato d;
        strcpy(d.cf, r.cf);
        d.consumo_totale = r.consumo;
        d.addebito_totale = 25.0 + 0.16643 * r.consumo;
        ins_testa(pl, d);
    }
}

void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("%s %.3f %.2f\n", l->dato.cf, l->dato.consumo_totale, l->dato.addebito_totale);
        l = l->next;
    }
}