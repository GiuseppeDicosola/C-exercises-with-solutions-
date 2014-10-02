#include <stdio.h>
#include <math.h>

double hypotenuse(double, double);

int main()
{
    double x, y, z;
    int counter;

    for(counter=0; counter<3; counter++){
        printf("Enter 1st short side: ");
        scanf("%lf", &x);
        printf("Enter 2nd short side: ");
        scanf("%lf", &y);
        z=hypotenuse(x, y);
        printf("Hypotenuse is %.1f\n\n", z);
    }

    return 0;
}

double hypotenuse(double a, double b)
{
    double c;

    c=sqrt(pow(a,2)+pow(b,2));

    return c;
}
