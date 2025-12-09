#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = malloc(10 * sizeof(int));

    if (arr != NULL)
    {
        // uso dell'array
        free(arr);
        arr = NULL;
    }
}