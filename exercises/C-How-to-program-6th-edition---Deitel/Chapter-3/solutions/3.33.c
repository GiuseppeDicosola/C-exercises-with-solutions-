#include <stdio.h>

int main()
{
    int size, i, j;

    printf("Enter side size: ");
    scanf("%d", &size);

    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
