#include <stdio.h>

int main()
{
    float sales, rate, salary;
    int regularSalary;

    regularSalary=200;
    rate=9.0/100;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);

    while(sales!=-1){
        salary=regularSalary+sales*rate;
        printf("Salary is: $%.2f\n\n", salary);

        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
    }

    return 0;
}
