#include <stdio.h>
int main(int argc, char *argv[])
{
    int i;
    printf("%d\n", argc);
    for (int i = 1; i <= argc - 1; i++)
    {
        printf("%d\n", argv[i]);
    }
}