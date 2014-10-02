#include <stdio.h>

 int main()
 {
     int i, counter, integer, min;

     min=integer;

     printf("Enter number of integer for lower and integers: ");
     scanf("%d", &i);
     for(counter=0; counter<i; counter++){
            scanf("%d", &integer);
            if(integer<min) min=integer;
     }
     printf("The lower is %d", min);

     return 0;
 }
