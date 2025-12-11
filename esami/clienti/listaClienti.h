typedef struct
{
    int mese;
    int anno;
    char cf[17];
    float consumo;
} Record;

typedef struct
{
    char cf[17];
    float consumo_totale;
    float addebito_totale;
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