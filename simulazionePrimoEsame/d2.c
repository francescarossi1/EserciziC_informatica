#include <stdio.h> 
int main(void)
{
    int i=1;
    int n; 
    while (i<1000)
    {
        i+=i%4?3:5; 
        if (n>44122)
        {
            printf("%d",i);
        }
        return 0;
    }
}

//44125