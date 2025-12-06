#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    /*a[0][0] = 1;
    a[1][1] = 1;
    a[2][2] = 1;*/

    /*printf("%d", a[0][0]);
    printf("%d", a[0][1]);
    printf("%d", a[0][2]);
    printf("\n");
    printf("%d", a[1][0]);
    printf("%d", a[1][1]);
    printf("%d", a[1][2]);
    printf("\n");
    printf("%d", a[2][0]);
    printf("%d", a[2][1]);
    printf("%d", a[2][2]);
    printf("\n");*/

    for (int j = 0; j <= 2; j++)
    {
        for (int i = 0; i <= 2; i++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n"); 
    }
}