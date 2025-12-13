#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaVeicoli.h"

// definizione
void nuovaLista(Lista *pl) { *pl = NULL; }

void ins_testa(Lista *pl, Dato d)
{
    Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
    if (aux == NULL)
    {
        printf("Errore allocazione memoria\n");
        exit(100);
    }
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

void aggiorna(Lista *l, Record r)
{
    while (*l != NULL && strcmp((*l)->dato.targa, r.targa) != 0)
    {
        l = &(*l)->next;
    }

    if (*l != NULL)
    {
        (*l)->dato.accessi++;
        (*l)->dato.durata += r.durata;

        if ((*l)->dato.accessi <= 5)
            (*l)->dato.saldo_totale += 2.0;
        else if ((*l)->dato.accessi <= 10)
            (*l)->dato.saldo_totale += 1.90;
        else
            (*l)->dato.saldo_totale += 1.80;
    }
    else
    {
        Dato d;
        strcpy(d.targa, r.targa);
        d.accessi = 1;
        d.durata = r.durata;
        d.saldo_totale = 2.0;
        ins_testa(l, d);
    }
}

void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("%s %f \n", l->dato.targa, l->dato.saldo_totale);
        l = l->next;
    }
}
