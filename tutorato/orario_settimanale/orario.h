typedef enum
{
    Lunedì,
    Martedì,
    Mercoledì,
    Giovedì,
    Venerdì
} Giorno;

typedef struct
{
    Giorno giorno;
    char slot[10]; // "Vuoto"
} Orari;

// funzioni
void inizializza(Orari calendario[5][4]);
void stampa(Orari calendario[5][4]);
void stampaGiorno(Orari calendario[5][4]);
void modifica(Orari calendario[5][4]);
