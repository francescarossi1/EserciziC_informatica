#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaStudenti.h"

void nuovaLista(Lista *pl)
{
    *pl = NULL;
}

void ins_testa(Lista *pl, Dato d)
{
    Nodo *aux;
    aux = (Nodo *)malloc(sizeof(Nodo));
    if (aux == NULL)
    {
        printf("Errore allocazione di memoria\n");
        exit(100);
    }
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

void aggiorna(Lista *pl, Record r)
{
    // legge tutta la lista
    while (*pl != NULL && (*pl)->dato.matricola != r.matricola) // diverso
    {
        pl = &(*pl)->next;
    }

    if (*pl != NULL && (*pl)->dato.matricola == r.matricola) // uguale
    // matricola già presente
    {
        if (r.voto >= 18)
        {
            (*pl)->dato.esami_superati++;
        }

        (*pl)->dato.somma_voti += r.voto; // somma dei voti
    }
    else
    {
        Dato d;
        d.matricola = r.matricola;
        d.esami_superati = 1;
        d.somma_voti = r.voto; // d.somma_voti=r.voto: la somma è il primo voto se nuovo studente
        ins_testa(pl, d);
    }
}

void stampa(Lista l)
{
    printf("Matricola     media\n");
    while (l != NULL)
    {
        // calcolo media
        printf("%d      %.2f\n", l->dato.matricola, l->dato.somma_voti / l->dato.esami_superati);

        l = l->next;
    }
}