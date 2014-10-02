#include <stdio.h>

int main()
{
    int i;

    i=1;

    while(i<=100)
    {
        i%10==0 ? printf("*\n") : printf("*");
        i++;
    }

    return 0;
}
