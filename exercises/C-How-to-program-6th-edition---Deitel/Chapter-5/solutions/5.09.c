#include <stdio.h>

float calculateCharges(float);

int main()
{
	float hoursCar1, hoursCar2, hoursCar3, totalHours;
	float chargeCar1, chargeCar2, chargeCar3, totalCharges;

	totalHours = 0;

	printf("Enter #1 car hours: ");
	scanf("%f", &hoursCar1);
    totalHours += hoursCar1;
	chargeCar1 = calculateCharges(hoursCar1);
	printf("Enter #2 car hours: ");
	scanf("%f", &hoursCar2);
	totalHours += hoursCar2;
	chargeCar2 = calculateCharges(hoursCar2);
	printf("Enter #3 car hours: ");
	scanf("%f", &hoursCar3);
	totalHours += hoursCar3;
	chargeCar3 = calculateCharges(hoursCar3);
	totalCharges = chargeCar1 + chargeCar2 + chargeCar3;

	printf("\n%-8s%8s%8s\n", "Car", "Hours", "Charge");
	printf("%-8d%8.1f%8.2f\n", 1, hoursCar1, chargeCar1);
	printf("%-8d%8.1f%8.2f\n", 2, hoursCar2, chargeCar2);
	printf("%-8d%8.1f%8.2f\n", 3, hoursCar3, chargeCar3);
	printf("%-8s%8.2f%8.2f\n\n", "TOTAL", totalHours, totalCharges);

	return 0;
}

float calculateCharges(float _hours)
{
	float charges;

	if(_hours<=3.0) charges=2.00;
    else if(_hours<24) charges=2.00+.50*(_hours-3.0);
	else charges=10.00;

	return charges;
}
