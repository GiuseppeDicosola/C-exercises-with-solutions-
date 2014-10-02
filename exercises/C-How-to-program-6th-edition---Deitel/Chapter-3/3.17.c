#include <stdio.h>

int main()
{
    float gallons, gallonsTot, miles, milesTot, average, averageTot;
    int counter;

    milesTot=0;
    gallonsTot=0;
    counter=0;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons);

    while(gallons!=-1){
        printf("Enter the miles driven: ");
        scanf("%f", &miles);
        average=miles/gallons;
        printf("The miles / gallon for this tank was %.6f\n\n", average);
        milesTot+=miles;
        gallonsTot+=gallons;
        counter++;

        printf("Enter the gallons used(-1 to end): ");
        scanf("%f", &gallons);
    }

    if(counter!=0){
        averageTot=milesTot/gallonsTot;
        printf("The overall average miles/gallon was %.6f", averageTot);
    }

    return 0;
}
