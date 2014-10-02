#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
#define readFile "numbers.dat"
#define writeFile "ascendingNumbers.dat"

void bubbleSort(int *, const int, int (*)(int, int));
int ascending(const int, const int);

int main()
{
	int i, j;
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
		if(i>100){
			puts("Values greater than 100");
			exit(1);
		}
		bubbleSort(numbers, SIZE, ascending);
		if((wfPtr=fopen(writeFile, "w"))==NULL)
			perror("File could not be opened!");
		else{
			for(j=0; j<i; j++)
				fprintf(wfPtr, "%d ", numbers[j]);
			fclose(wfPtr);
		}
		fclose(rfPtr);
	}
}

void bubbleSort(int *array, const int size, int (*compare)(int, int))
{
	int pass, count;
	void swap(int *, int*);

	for(pass=1; pass<=size-1; pass++)
		for(count=0; count<=size-2; count++)
			if((*compare)(array[count], array[count+1]))
				swap(&array[count], &array[count+1]);
}

void swap(int *element1Ptr, int *element2Ptr)
{
	int temp;

	temp=*element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr=temp;
}

int ascending(const int a, const int b)
{
	return b<a;
}
