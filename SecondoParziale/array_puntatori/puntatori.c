#include <stdio.h>
int main()
{
    int a[5] = {4, 1, 0, 8, 5};
    int *p;
    p = a;
    printf("%d\n", *p);
    *p = 7;

    scanf("%d", a); // 12
                    // primo elemento dell'array a[0]=12
}
// watch
// (unsigned long)a
// (unsigned long)p

// array e puntatori rappresentano indirizzi