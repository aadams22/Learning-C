#include <stdio.h>
#include <stdlib.h>

//function declaration
void bruteForce(int a[], size_t len);
void divideAndConquor(int a[], int n);


int main(int argc, char** argv) {

	for (int i = 0; i < argc; ++i)
	{
		printf("arg %d is %s\n", i, argv[i]);
	}


	char* ptr;
	unsigned int length_k = strtol(argv[1], &ptr, 10);
	int a[length_k];
	int n = (length_k - 1)/2;

	for (int i = 0; i < length_k; ++i)
	{
		a[i] = rand();
		// printf("Element[%d] = %d\n", i, a[i] ); // output each array element's value
	}

	// bruteForce(a, length_k);
	divideAndConquor(a, n);

}


//function definition

//for loop version
void bruteForce(int a[], size_t len) {

	for (unsigned int i = 1; i < len; ++i)
	{
		if(a[i] > a[i - 1] && a[i] > a[i + 1]) {
			printf("%u is a peak\n", a[i]);
		}
			printf("Element[%d] = %d\n", i, a[i] ); // output each array element's value
	
	}
	
}

//recursion version
void divideAndConquor(int a[], int n) {
	printf("this is a[%u]\n", a[n]);

	if(a[n] > a[n - 1] && a[n] > a[n + 1]) {
		printf("%u is a peak\n", a[n]);
	}else if(a[n - 1] > a[n])
	{
		//checks left side
		n = n - 1;
		divideAndConquor(a, n);
	}else {
		//checks right side
		n = n + 1;
		divideAndConquor(a, n);
	}
}







