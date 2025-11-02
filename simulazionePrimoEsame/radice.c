#include <stdio.h>
float valAssoluto(float x)
{
    return x < 0 ? -x : x;
}

float radice(float a, int n)
{
    float x = 1.0f;
    float p;
    int i = 0;

    do
    {
        p = 1.0f;
        for (i = 0; i < n - 1; i++)
        {
            p = p * x;
        }

        x = ((n - 1) * p * x + a) / (n * p);
    } while (valAssoluto(p * x - a) / a > 1e-5);
    return x;
}
int main()
{
    float y;
    int m;

    printf("Numero reale\n");
    scanf("%f", &y);
    printf("Numero intero\n");
    scanf("%d", &m);
    for (int k = 2; k <= m; k++)
    {
        printf("%f\n", radice(y, k));
    }
}