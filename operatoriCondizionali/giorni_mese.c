#include <stdio.h>
int main()
{
    int mese, anno;
input:
    printf("Inserisci un mese\n");
    scanf("%d", &mese);
    printf("Inserisci un anno\n");
    scanf("%d", &anno);
    if (mese < 1 || mese > 12)
    {
        printf("errore \n");
        goto input;
    }
    else
    {
        if (mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10 || mese == 12)
        {
            printf("il mese ha 31 giorni\n");
        }
        else if (mese == 2)
        {
            if (anno % 4 == 0 && anno % 100 != 0 || anno % 400 == 0)
            {
                printf("hai inserito un anno bisestile\n");
                printf("il mese di febbraio ha 29 giorni\n");
            }
            else
            {
                printf("non hai inserito un anno bisestile\n");
                printf("il mese di febbraio ha 28 giorni\n");
            }
        }
        else
        {
            printf("il mese ha 30 giorni\n");
        }
    }
}