#include <stdio.h>
#include <stdlib.h>

//variable definitions
// #define ARR_LENGTH_K 32

//function declaration 
void reverse(int a[], size_t len);


// argc = argument count
// argv = argument vector
int main(int argc, char** argv) {
	for(int i = 0; i < argc; i++) {
	  printf("arg %d is %s\n", i, argv[i]);
	}
	

	char* ptr;

  unsigned int length_k = strtol(argv[1], &ptr, 10);
    
	int a[length_k];
	

	for (unsigned int i = 0; i <= length_k; ++i) 	// writes array
	{
		a[i] = i;
		// printf("Element[%d] = %d\n", i, a[i] ); // output each array element's value
	}

	int k = sizeof(a);
	printf("sizeof k %d\n", k);

	reverse(a, length_k); 	//reverses array

	for (unsigned int i = 0; i <= length_k; ++i)
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


// This bug exists when the user types 0: 
/* ./a.out 0
* arg 0 is ./a.out
* arg 1 is 0
* sizeof k 0
/* Element[0] = 0

