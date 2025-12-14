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

/* ---------- PARTE 2 ---------- */

int contaVaccini(Dato d)
{
    return d.cimurro + d.epatite + d.parvovirosi;
}

static void stampaPerKVaccini(Lista l, FILE *fp, int k)
{
    while (1)
    {
        Nodo *min = NULL;
        Nodo *p = l;

        while (p != NULL)
        {
            if (p->dato.chip != -1 && contaVaccini(p->dato) == k)
            {
                if (min == NULL || p->dato.chip < min->dato.chip)
                    min = p;
            }
            p = p->next;
        }

        if (min == NULL)
            break;

        fprintf(fp, "%d\n", min->dato.chip);
        min->dato.chip = -1; // segnato come già scritto
    }
}

void scriviFileVaccinati(Lista l)
{
    FILE *fp = fopen("vaccinati.txt", "wt");
    if (fp == NULL)
    {
        printf("Errore apertura vaccinati.txt\n");
        return;
    }

    stampaPerKVaccini(l, fp, 3);
    stampaPerKVaccini(l, fp, 2);
    stampaPerKVaccini(l, fp, 1);

    fclose(fp);
}
