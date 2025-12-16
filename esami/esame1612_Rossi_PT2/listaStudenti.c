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

//============pt2==============================

int confronto(Dato d1, Dato d2) // semantica stile strcmp
{
    // valore <0 se d1 precede d2
    // valore 0 se sono uguali
    // valore
    int r;
    r = d1.esami_superati - d2.esami_superati;
    if (r != 0)
    {
        return -r;
    }
    else
    {
        if (d1.somma_voti / d1.esami_superati < d2.somma_voti / d2.esami_superati)
        {
            return 1;
        }
        else if (d1.somma_voti / d1.esami_superati > d2.somma_voti / d2.esami_superati)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
}

void ins_ord(Lista *pl, Dato d)
{
    while (*pl != NULL && confronto((*pl)->dato, d) < 0)
    {
        pl = &(*pl)->next;
    }
    ins_testa(pl, d);
}

void ordina(Lista l1, Lista *pl2)
{
    nuovaLista(pl2);
    while (l1 != NULL)
    {
        ins_ord(pl2, l1->dato);
        l1 = l1->next;
    }
}

void stampa(Lista l)
{
    printf("Matricola      esami superati    media\n");
    while (l != NULL)
    {
        // calcolo media
        printf("%d    %d      %.2f\n", l->dato.matricola, l->dato.esami_superati, l->dato.somma_voti / l->dato.esami_superati);

        l = l->next;
    }
}