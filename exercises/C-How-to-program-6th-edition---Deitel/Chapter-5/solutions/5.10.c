#include <stdio.h>
#include <math.h>

float roundingFloor(float);

int main()
{
    float x, y;
    int counter;

    printf("Enter number: ");
    for(counter=0; counter<3; counter++){
        scanf("%f", &x);
        y=roundingFloor(x);
        printf("Before rounding: %.2f\n", x);
        printf("After rounding: %.2f\n\n", y);
    }

    return 0;
}

float roundingFloor(float n)
{
    float floorNumber;

    floorNumber=floor(n+.5);

    return floorNumber;
}
