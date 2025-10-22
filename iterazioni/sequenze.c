#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 10)
    {
        printf("%d", i);
        i++;
    }
    printf("\n*****\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%d", j);
    }
    return 0;
}