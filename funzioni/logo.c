#include <stdio.h>
void logo()
{
    printf("#    Rubrica    #\n");
}

int main()
{
    int scelta;

    logo();
    printf("1. Francesca Rossi 1234567890\n");
    printf("2. Martina Rossi \n");
    printf("Scegliere il contatto\n");
    scantf("%d", &scelta);

    logo();
    printf("Chiamata contatto %d in corso \n", scelta);

    printf("Fine\n");
    return 0;
}
