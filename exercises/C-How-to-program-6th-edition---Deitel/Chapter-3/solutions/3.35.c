#include <stdio.h>

int main()
{
    int i, n1, n2, n3, n4, n5;

    printf("Enter an five-digit integer: ");
    scanf("%d", &i);

    n1=i/10000;
    n2=(i/1000)%10;
    n3=(i/100)%10;
    n4=(i/10)%10;
    n5=i%10;

    if(n1 == n5 && n2 == n4)
        printf("\n%d is palyndrome\n", i);
    else
        printf("\n%d is not palyndrome\n", i);

    return 0;
}
