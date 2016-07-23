#include <stdio.h>
#include <stdlib.h>

//function declaration
void peak1D(int a[], size_t len);


int main(int argc, char** argv) {

	for (int i = 0; i < argc; ++i)
	{
		printf("arg %d is %s\n", i, argv[i]);
	}


	char* ptr;
	unsigned int length_k = strtol(argv[1], &ptr, 10);
	int a[length_k];

	for (int i = 0; i < length_k; ++i)
	{
		a[i] = rand();
		// printf("Element[%d] = %d\n", i, a[i] ); // output each array element's value

	}

	peak1D(a, length_k)

}


//function definition
void peak1D(int a[], size_t len) {
	for (int i = 0; i < len; ++i)
	{
		printf("Element[%d] = %d\n", i, a[i] ); // output each array element's value
	}
	
}