#define DIM 1000
typedef struct
{
    int matricola;
    char nome_esame[40];
    int giorno;
    int mese;
    int anno;
    int voto;
} Record;

typedef struct
{
    int matricola;
    int esami_superati;
    float somma_voti;
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