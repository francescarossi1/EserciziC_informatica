#include <stdio.h>
#include "studente.h"
#include <string.h>

int main()
{
    int n;
    printf("Quanti studenti vuoi inserire?\n");
    scanf("%d", &n);

    Studente studenti[n];

    for (int i = 0; i < n; i++)
    {
        printf("Inserisci nome studente\n");
        scanf("%s", &studenti[i].nome);
        printf("Inserisci cognome studente\n");
        scanf("%s", &studenti[i].cognome);
        printf("Inserisci matricola studente\n");
        scanf("%d", &studenti[i].matricola);
    }
    printf("==========================================\n");
    stampaTuttiStudenti(studenti, n);
}