#include <stdio.h>
int main()
{
    int a, b, c;
    printf("inserire numero a e b: ");
    scanf("%d %d", &a, &b);
    c = a += b;

    printf(" %d %d %d", a, b, c);
}