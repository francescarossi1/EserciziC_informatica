#include <stdio.h>
void swap(int *pm, int *pn)
{
    int t;
    t = *pm;
    *pm = *pn;
    *pn = t;
}
void ordina(int *pa, int *pb)
{
    if (*pb < *pa)
    {
        swap(pa, pb);
    }
}
int main()
{
    int a, b;
    printf("Inserisci a\n");
    scanf("%d", &a);
    printf("Inserisci b\n");
    scanf("%d", &b);

    ordina(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}