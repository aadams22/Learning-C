#include <stdio.h>

//variable definitions
#define ARR_LENGTH_K 32

//function declaration 
void reverse(int a[], size_t len);


// argc = argument count
// argv = argument vector
int main(int argc, char** argv) {
	int a[ARR_LENGTH_K];
	unsigned int i;


	for(i = 0; i < argc; i++) {
	    printf("arg %d is %s\n", i, argv[i]);
	}
	

	for (i = 0; i <= ARR_LENGTH_K; ++i) 	// writes array
	{
		a[i] = i;
		// printf("Element[%d] = %d\n", i, a[i] ); // output each array element's value
	}

	int k = sizeof(a);
	printf("%d\n", k);

	reverse(a, ARR_LENGTH_K); 	//reverses array

	for (i = 0; i <= ARR_LENGTH_K; ++i)
	{
		printf("Element[%d] = %d\n", i, a[i] ); // output each array element's value

	}

	return 0;

	}


// function definition 
void reverse(int a[], size_t len) {

	for (int i = 0; i < len/2; i++ ) 
	{
		int other = len - i;
		int temp = a[i];
		a[i] = a[other];
		a[other] = temp;
	}



}

