#include <stdio.h>
#define ARR_LENGTH_K 16

//function declaration 
void reverses(int a[], size_t len);



int main() {
	int a[ARR_LENGTH_K];

	int i;
	for (int i = 0; i <= 16; ++i) 	// writes array
	{
		a[i] = i;
		printf("Element[%d] = %d\n", i, a[i] ); // output each array element's value
	}

	int k = sizeof(a, ARR_LENGTH_K);
	printf("%d\n", k);

	reverses(a, ARR_LENGTH_K); 	//reverses array

	for (int i = 0; i <= 16; ++i)
	{
		printf("Element[%d] = %d\n", i, a[i] ); // output each array element's value

	}

	return 0;

	}


	// function definition 
void reverses(int a[], size_t len) {


	for (int i = 0; i < ARR_LENGTH_K/2; i++ ) 
	{
		int other = ARR_LENGTH_K - i;
		int temp = a[i];
		a[i] = a[other];
		a[other] = temp;
	}



}

