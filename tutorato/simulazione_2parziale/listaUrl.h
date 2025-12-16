#define DIM 1000
typedef struct
{
    char url[100];
    int ora_visita;
    int minuti_visita;
} Record;

typedef struct
{
    char url[100];
    int ora_visita;    // ora max
    int minuti_visita; // minuti max
    int conta_visite;
} Dato;

typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *l);
void ins_testa(Lista *pl, Dato d);
void aggiorna(Lista *pl, Record r);
void stampa(Lista l);