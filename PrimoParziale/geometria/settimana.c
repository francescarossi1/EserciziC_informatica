#include <stdio.h>
int main()
{
    int n;
    printf("inserisci un numero settimana");
    scanf("%d\n", &n);
    if (n >= 1 && n <= 7)
    {
        printf("Giorno della settimana\n");
        switch (n)
        {
        case 1:
            printf("lunedì\n");
            break;
        case 2:
            printf("martedì\n");
            break;
        case 3:
            printf("mercoledì");
            break;
        case 4:
            printf("giovedì\n");
            break;
        case 5:
            printf("venerdì\n");
            break;
        case 6:
            prinf("sabato\n");
            break;
        case 7:
            printf("domenica\n");
            break;
        }
    }
}