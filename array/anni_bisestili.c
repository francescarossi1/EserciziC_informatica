#include <stdio.h>
int bisestile(int anno)
{
    return anno % 400 == 0 || anno % 4 == 0 && anno % 100 != 0;
    ;
}
int main()
{
    int a[201];
    int b[201];
    int dl;
    for (int i = 0; i <= 200; i++)
    {
        a[i] = 1900 + i;
    }
    dl = 0;
    for (int i = 0; i <= 200; i++)
    {
        if (bisestile(a[i]))
        {
            b[dl] = a[i];
            dl++;
        }
    }
    for (int i = 0; i < dl; i++)
    {
        printf("%d\n", b[i]);
    }
}

// 49 anni bisestili