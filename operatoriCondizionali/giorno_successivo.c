#include <stdio.h>
int main()
{
    int giorno, mese, anno;
input:
    printf("Inserisci un giorno\n");
    scanf("%d", &giorno);

    printf("Inserisci un mese\n");
    scanf("%d", &mese);
    printf("Inserisci un anno\n");
    scanf("%d", &anno);
    if (giorno < 1 || giorno > 31)
    {
        printf("giorno inserito non valido\n");
        goto input;
    }
    else if (mese < 1 || mese > 12)
    {
        printf("mese inserito non valido \n");
        goto input;
    }
    else
    {

        if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
        {
            if (giorno == 30)
            {
                mese++;
                giorno = 1;
            }
            else
            {
                giorno++;
            }
        }
        else if (mese == 2)
        {
            if (anno % 4 == 0 && anno % 100 != 0 || anno % 400 == 0)
            {
                // 29 febbraio
                giorno++;
            }
            else
            {
                // 28 febbraio
                if (giorno == 28)
                {
                    mese++;
                    giorno = 1;
                }
                else
                {
                    giorno++;
                }
            }
        }
        else
        {
            if (giorno == 31)
            {
                if (mese == 12)
                {
                    giorno = 1;
                    mese = 1;
                    anno++;
                }
                else
                {
                    mese++;
                    giorno = 1;
                }
            }
            else
            {
                giorno++;
            }
        }
    }
    printf("Il giorno successivo è %d/%d/%d", giorno, mese, anno);
}