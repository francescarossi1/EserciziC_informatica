#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    // un veicolo
    char targa[8];
    float durata;
} Record;

typedef struct
{
    // tutti i veicoli uguali in lista
    char targa[8];
    float durata;
    float saldo_totale;
    int accessi;
} Dato;

typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);

void insTesta(Lista *pl, Dato d);

void aggiorna(Lista *pl, Record r);

void stampa(Lista l);