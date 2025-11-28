#include <stdio.h>
#include "rubrica.h"

void stampaRubrica(Contatto r[], int dl)
{
    for (int i = 0; i < dl; i++)
    {
        printf("===Contatto %d\n===", i + 1);
        printf("Nome %s\n", r[i].nome);
        printf("Cognome %s\n", r[i].cognome);
        printf("Numero %d\n", r[i].numero);
    }
}

void inserisciNuovoContatto(Contatto r[], int *dl)
{
    printf("Inserisci nome: ");
    scanf("%s", r[*dl].nome);

    printf("Inserisci cognome: ");
    scanf("%s", r[*dl].cognome);

    printf("Inserisci numero: ");
    scanf("%d", &r[*dl].numero);

    (*dl)++;
}

void cercaContatto(Contatto *r, int dl)
{
    int n;
    printf("Inserisci contatto da cercare \n");
    scanf("%d", &n);

    for (int i = 0; i < dl; i++)
    {
        if (r[i].numero == n)
        {
            printf("Contatto trovato\n");
        }
        else
        {
            printf("Contatto non trovato\n");
        }
    }
}

void stampaContatto(Contatto c)
{
    printf("Nome %s\n", c.nome);
    printf("Cognome %s\n", c.cognome);
    printf("Numero %d\n", c.numero);
}