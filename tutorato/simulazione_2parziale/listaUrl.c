#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaUrl.h"

void nuovaLista(Lista *pl)
{
    *pl = NULL;
}

void ins_testa(Lista *pl, Dato d)
{
    Nodo *aux;
    aux = (Nodo *)malloc(sizeof(Nodo));
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

void aggiorna(Lista *pl, Record r)
{
    while (*pl != NULL && strcmp((*pl)->dato.url, r.url) != 0)
    {
        pl = &(*pl)->next;
    }
    if (*pl != NULL && strcmp((*pl)->dato.url, r.url) == 0)
    {
        (*pl)->dato.conta_visite++;
        if ((*pl)->dato.ora_visita < r.ora_visita ||
            ((*pl)->dato.ora_visita == r.ora_visita &&
             (*pl)->dato.minuti_visita < r.minuti_visita))
        {
            (*pl)->dato.ora_visita = r.ora_visita;
            (*pl)->dato.minuti_visita = r.minuti_visita;
        }
    }
    else
    {
        Dato d;
        strcpy(d.url, r.url);
        d.conta_visite = 1;
        d.ora_visita = r.ora_visita;
        d.minuti_visita = r.minuti_visita;
        ins_testa(pl, d);
    }
}

void stampa(Lista l)
{
    printf("Url     n_visite    ora\n");
    while (l != NULL)
    {
        if (l->dato.conta_visite >= 5)
        {
            printf("%s      %d       %d:%d\n", l->dato.url, l->dato.conta_visite, l->dato.ora_visita, l->dato.minuti_visita);
        }
        l = l->next;
    }
}