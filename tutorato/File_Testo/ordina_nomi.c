#include <stdio.h>
#include <stdlib.h>

#define DIM 4

typedef struct
{
    char cognome[20];
    char nome[20];
    int matricola;
} Studente;

int main()
{
    Studente studenti[DIM];
    FILE *pf, *pf2;
    int letti;

    if ((pf = fopen("nomi.txt", "rt")) == NULL)
    {
        printf("Errore apertura\n");
        exit(1);
    }

    if ((pf2 = fopen("ordinato.txt", "wt")) == NULL)
    {
        printf("Errore apertura\n");
        exit(1);
    }

    for (int i = 0; i < DIM; i++)
    {
        fscanf(pf, "%s %s %d", studenti[i].cognome, studenti[i].nome, &studenti[i].matricola);
    }

    // Stampa dati letti
    for (int i = 0; i < DIM; i++)
    {
        printf("%s\n", studenti[i].cognome);
        printf("%s\n", studenti[i].nome);
        printf("%d\n", studenti[i].matricola);
    }

    // bubble sort di matricola
    for (int i = 0; i < DIM - 1; i++)
    {
        for (int j = 0; j < DIM - 1 - i; j++)
        {
            if (studenti[j].matricola > studenti[j + 1].matricola)
            {
                Studente temp = studenti[j];
                studenti[j] = studenti[j + 1];
                studenti[j + 1] = temp;
            }
        }
    }

    // scrittura array ordinato in un nuovo file
    for (int i = 0; i < DIM; i++)
    {
        fprintf(pf2, "%s %s %d\n", studenti[i].cognome, studenti[i].nome, studenti[i].matricola);
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }

    if (fclose(pf2) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }
}
