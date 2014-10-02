 #include <stdio.h>

 int main()
 {
     int hours, salaryExtra, hoursStd;
     float hourlyRate, salary, extra;

     hoursStd=40;
     extra=1.5;

     printf("Enter # of hours worked (-1 to end): ");
     scanf("%d", &hours);

     while(hours!=-1){
            printf("Enter hourly rate of the worker ($00.00): ");
            scanf("%f", &hourlyRate);
            if(hours<=hoursStd){ salary=hours*hourlyRate; }
            else{
                salaryExtra=(hours-hoursStd)*extra;
                salary=hoursStd*hourlyRate+salaryExtra;
                }
            printf("Salary is $%.2f\n\n", salary);

            printf("Enter # of hours worked (-1 to end): ");
            scanf("%d", &hours);
     }
     return 0;
 }
