#include <stdio.h>
int main()
{
    int pin;
richiesta:
    printf("Inserisci un pin\n");
    scanf("%d", &pin);
    if (pin != 44122)
    {
        goto richiesta;
    }
    printf("Accesso consentito\n");
}