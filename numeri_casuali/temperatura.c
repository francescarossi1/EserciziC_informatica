#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f \n", 15.0 + 10.0 * rand() / RAND_MAX);
    }
    return 0;
}