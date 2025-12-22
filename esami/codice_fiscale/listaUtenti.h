#include <stdio.h>
#include <stdlib.h>

typedef char CodiceFiscale[17];

typedef struct
{
    CodiceFiscale cf;
    int attivita[3];
} Dato;

typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);

void insTesta(Lista *pl, Dato d);

void inserisciUtente(Lista *pl, CodiceFiscale cf);

void aggiorna(Lista *pl, CodiceFiscale cf, int att);

void stampa(Lista l);
