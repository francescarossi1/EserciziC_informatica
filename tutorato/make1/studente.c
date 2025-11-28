#include "studente.h"
#include <stdio.h>

void stampaTuttiStudenti(Studente s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nome: %s \n", s[i].nome);
        printf("Cognome: %s \n", s[i].cognome);
        printf("Matricola: %d \n", s[i].matricola);
    }
}
