#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
#define readFile "numeri.dat"
#define writeFile "numeriCrescenti.dat"

int main()
{
	int i, j;
	int pass, count, temp;
	int numbers[SIZE];
	FILE *rfPtr;
	FILE *wfPtr;

	i=0;

	if((rfPtr=fopen(readFile, "r"))==NULL)
		perror("File could not be opened!");
	else{
		while(!feof(rfPtr)){
			fscanf(rfPtr, "%d", &numbers[i]);
			i++;
		}
	}
	fclose(rfPtr);
		if(i>100){
			puts("Values greater than 100");
			exit(1);
		}
		// ordinamento crescente numeri
		for(pass=1; pass<=SIZE-1; pass++)
			for(count=0; count<=SIZE-2; count++)
				if((numbers[count]>numbers[count+1])){
					temp=numbers[count];
					numbers[count]=numbers[count+1];
					numbers[count+1]=temp;
				}
		if((wfPtr=fopen(writeFile, "w"))==NULL)
			perror("File could not be opened!");
		else{
			for(j=0; j<i; j++)
				fprintf(wfPtr, "%d ", numbers[j]);
			fclose(wfPtr);
		}
		fclose(rfPtr);
	return 0;
}
