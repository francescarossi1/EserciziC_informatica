#include <stdio.h>
int main()
{
    int scelta, pin;
    scanf("%d", &pin);
    if (pin == 44122)
    {
        printf("1, 3381335290\n");
        printf("2, 9882928920\n");
        printf("Quale contatto vuoi chimare?\n");
        scanf("%d", &scelta);
        printf("chiamata in corso contatto:  %d ", scelta);
    }
    printf("fine\n");
}