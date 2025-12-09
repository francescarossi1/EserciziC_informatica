#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int fz, z = 5;
    fz = fact(z - 2);

    printf("%d \n", fz);
}