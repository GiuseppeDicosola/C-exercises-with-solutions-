#include <stdio.h>

int main()
{
    int bin, i, binMultiplier;

    i=0;
    binMultiplier=1;

    printf("Enter a binary integer: ");
    scanf("%d", &bin);

    while(bin>=1)
    {
        i+=(bin%10)*binMultiplier;
        bin/=10;
        binMultiplier*=2;
    }

    printf("%d", i);

    return 0;
}
