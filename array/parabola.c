#include <stdio.h>
int main()
{
    float a, b, c;
    float ascisse[21];
    float ordinate[21];
    float valore;

    printf("Inserire i parametri\n");
    scanf("%d %d %d", &a, &b, &c);
    valore = -1.0;

    for (int i = 0; i < 21; i++)
    {
        ascisse[i] = -1.0f + 0.1 * i;
    }
    for (int i = 0; i < 21; i++)
    {
        ordinate[i] = a * ascisse[i] + ascisse[i] + b + ascisse[i] + c;
    }
    for (int i = 0; i < 21; i++)
    {
        printf("%f %f \n", ascisse[i], ordinate[i]);
    }
    return 0;
}