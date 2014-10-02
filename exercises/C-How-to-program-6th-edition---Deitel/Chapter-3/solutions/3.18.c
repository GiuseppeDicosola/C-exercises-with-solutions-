#include <stdio.h>

int main()
{
    int accNum;
    float balanceOld, chargesTot, creditTot, creditLim, balanceNew;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &accNum);

    while(accNum!=-1){
        printf("Enter beginning balance: ");
        scanf("%f", &balanceOld);
        printf("Enter total charges: ");
        scanf("%f", &chargesTot);
        printf("Enter total credit: ");
        scanf("%f", &creditTot);
        printf("Enter credit limit: ");
        scanf("%f", &creditLim);

        balanceNew=balanceOld+chargesTot-creditTot;
        if(balanceNew>creditLim){
                printf("Account: %8d\n", accNum);
                printf("Credit limit: %.2f\n", creditLim);
                printf("Balance: %12.2f\n", balanceNew);
                printf("Credit Limit Exceeded.\n");
        }

        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &accNum);
    }

    return 0;
}
