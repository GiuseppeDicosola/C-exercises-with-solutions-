#include <stdio.h>

void swap(int *, int *);

int main(){
	int a = 5,
	    b = 3;

	printf("Before swap a = %d e b = %d\n", a, b);
	swap(&a, &b);
	printf("After swap a = %d e b = %d\n", a, b);

	return 0;
}

void swap(int *A, int *B){
	int temp;
	temp = *B;
	*B = *A;
	*A = temp;
}
