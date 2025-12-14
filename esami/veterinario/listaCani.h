#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int chip;
    char tipologiaVaccino;
} Record;

typedef struct
{
    int chip;
    int cimurro;     // 0 = no, 1 = sì
    int epatite;     // 0 = no, 1 = sì
    int parvovirosi; // 0 = no, 1 = sì
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

void stampaNonVaccinati(Lista l);

/* Parte 2 */
int contaVaccini(Dato d);
void scriviFileVaccinati(Lista l);