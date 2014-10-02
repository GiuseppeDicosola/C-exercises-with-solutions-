#include <stdio.h>

int main()
{
    int n;

    n=1;

    while(n<=300000000)
    {
        if(n%100000000==0)
        {
            printf("%d\n", n/100000000);
        }
        
        n++;
    }

    return 0;
}
