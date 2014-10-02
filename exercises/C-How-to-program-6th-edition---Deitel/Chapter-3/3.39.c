#include <stdio.h>

int main()
{
    int i, // the variable i is the integer I type
        total; // the variable total represents the total of 7 including nell'integer

    /* 
	 * initialize total to 0 Why? Because if you do not initialize a variable, 
	 * its value is indeterminate and normally contains a garbage value, 
	 * the value at the time of the allocation in memory.
	 */
    total=0;

    printf( "Enter an integer: " );
    scanf("%d", &i);

    /*
	 * the condition of the while statement must be strictly greater than zero. 
	 * The reason is explained in the body of the loop.
	 */
    while(i>0){
		/*
		 * I check if the input module is equal to 7: if the condition is true,
		 * increments the variable total; after which divide the entire 10
		 * until it reaches zero the condition i / = 10.
		 * EXAMPLE: if I typed 173
		 * 173%10=3 FALSE -> total=0;
		 * 173/10=17;
		 * 17%10=7 VERA -> increment total; total=1;
		 * 17/10=1
		 * 1%10=1 FALSE -> total=1;
		 * 1/10=0
		 * end loop
		 */      
        if((i%10)==7) total++;
        i/=10;
    }

    // print variable total value: in our case will be 1
    printf("7 were included: #%d\n", total);

    return 0;
}
