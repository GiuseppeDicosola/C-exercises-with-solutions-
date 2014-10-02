#include <stdio.h>
#define SIZE 100
#define fileName "numeri.dat"

void createFile(void);

int main()
{
	createFile();

	return 0;
}

void createFile(void)
{
	int numbers;
	int j;
	FILE *cfPtr;

	if((cfPtr = fopen(fileName, "w")) == NULL)
		puts("File could be opened!");
	else{
		puts("Enter numbers");
		puts("Enter EOF to end input.");
		printf("> ");
		scanf("%d", &numbers);
		for(j = 0; j < SIZE; j++){
			while(!feof(stdin)){
				fprintf(cfPtr, "%d ", numbers);
				printf("> ");
				scanf("%d", &numbers);
			}
		}
		fclose(cfPtr);
	}
}
