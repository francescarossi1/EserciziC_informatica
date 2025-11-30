#include <stdio.h>
int main(void)
{
    int i = 1;
    int n;
    while (i < 1000)
    {
        i += i % 4 ? 3 : 5;
        return 0;
    }
}

// 44125