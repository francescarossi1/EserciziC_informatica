#include <stdio.h>
int main()
{
    int pin;
    printf("inserisci il pin: \n");
    scanf("%d", &pin);
    if (pin == 44122)
    {
        printf("accesso consentito\n");
    }
}