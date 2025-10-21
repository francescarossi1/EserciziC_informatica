#include <stdio.h>
int main(void)
{
    int a = 2, b;
    char ch;
    int *p;
    printf("a o b\n");
    scanf("%c", &ch);

    if (ch == 'a')
    {
        p = &a;
    }
    a = 1;
    b = 2;
    *p = 3;
    printf("%d %d\n", a, b);

    return 0;
}