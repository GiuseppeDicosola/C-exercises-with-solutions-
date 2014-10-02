#include <stdio.h>

int main()
{
    int i, counter, integer, sum;

    sum=0;

    printf("Enter number of integer for sum and integers: ");
    scanf("%d", &i);
    for(counter=0; counter<i; counter++){
        scanf("%d", &integer);
        sum+=integer;
    }
    printf("%d", sum);

    return 0;
}
