#include <stdio.h>

int main()
{
    int value, counter, sum, picket, average;

    picket=9999;
    sum=0;

    printf("Enter integers (9999 to end): ");
    scanf("%d", &value);
    for(counter=0; value!=picket; counter++){
        sum+=value;
        scanf("%d", &value);
    }
    if(counter!=0){
        average=sum/counter;
        printf("The average is %d", average);
    }else{ printf("No value were entered.\n");}

    return 0;
}
