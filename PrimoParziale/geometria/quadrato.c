#include <stdio.h>
int main()
{
    int lato;
    printf("inserire la misura del lato del quadrato: ");
    scanf("%d", &lato);

    printf("il perimetro del quadrato è %d e la sua area è %d", lato * 4, lato * lato);
}