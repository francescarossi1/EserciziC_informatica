#include <stdio.h>
int main()
{
    int a, b, c;
    printf("inserisci lato 1 triangolo\n");
    scanf("%d\n", &a);
    printf("inserisci lato 2 triangolo\n");
    scanf("%d\n", &b);
    printf("inserisci lato 3 triangolo\n");
    scanf("%d\n", &c);
    /*if (a==b)
    {
        if (a==c)
        {
            printf("equilatero\n");
        }else{
            printf("isoscele\n");
        }

    } else if (a==c)
        {
            printf("isoscele\n");
        } else if (b==c)
        {
            printf("isoscele\n");
        }else
        {
            printf("scaleno\n");
        }*/

    if (a == b && a == c)
    {
        printf("equilaero\n");
    }
    else if (a == b || a == c || b == c)
    {
        printf("isoscele\n");
    }
    else
    {
        printf("scaleno\n");
    }
}