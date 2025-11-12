#include <stdio.h>

// Data una parola, stamparla in lettere maiuscole

void toUppercase(char *s)
{

    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = s[i] - 32;
        }
        i++;
    }
}

int main()
{

    char s[81];

    scanf("%s", s);
    toUppercase(s);
    printf("%s\n", s);

    return 0;
}