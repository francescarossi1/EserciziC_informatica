#include <stdio.h>
int main()
{
    int d;
    fprintf(stdout, "Hello\n"); // lettura 
    fscanf(stdin, "%d", &d);    // scrittura
    return 0;
}