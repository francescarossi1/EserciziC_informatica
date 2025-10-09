#include <stdio.h>
int main()
{
    int anno;
    printf("Inserisci un anno\n");
    scanf("%d", &anno);

    if (anno % 4 == 0 && anno % 100 != 0)
    {
        printf("hai inserito un anno bisestile\n");
    }
    else
    {
        printf("non hai inserito un anno bisestile\n");
    }
}