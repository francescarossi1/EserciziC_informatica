#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaUtenti.h"

void nuovaLista(Lista *pl)
{
    *pl = NULL;
}

void insTesta(Lista *pl, Dato d)
{
    Nodo *aux = malloc(sizeof(Nodo));
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

void inserisciUtente(Lista *pl, CodiceFiscale cf)
{
    Dato d;
    strcpy(d.cf, cf);
    d.attivita[0] = 4;
    d.attivita[1] = 4;
    d.attivita[2] = 4;
    insTesta(pl, d);
}

void aggiorna(Lista *pl, CodiceFiscale cf, int att)
{
    while (*pl != NULL && strcmp((*pl)->dato.cf, cf) != 0)
    {
        pl = &(*pl)->next;
    }
    if (*pl != NULL && strcmp((*pl)->dato.cf, cf) == 0)
        if ((*pl)->dato.attivita[att - 1] < 1)
        {
            printf("Utente %s, attivita %d: accesso negato\n", (*pl)->dato.cf,
                   att);
        }
        else
        {
            (*pl)->dato.attivita[att - 1]--;
        }
}

void stampa(Lista l)
{
    while (l)
    {
        printf("Ingressi utente %s: %d %d %d\n", l->dato.cf, l->dato.attivita[0],
               l->dato.attivita[1], l->dato.attivita[2]);
        l = l->next;
    }
}