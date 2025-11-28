typedef struct
{
    char nome[30];
    char cognome[30];
    int numero;

} Contatto;

void stampaRubrica(Contatto r[], int dl);
void inserisciNuovoContatto(Contatto r[], int *dl);
void cercaContatto(Contatto *r, int dl);

void stampaContatto(Contatto c);