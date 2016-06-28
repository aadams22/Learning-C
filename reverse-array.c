#include <stdio.h>

//reversal function felclaration 
void reverses();
int a[16];
int i, j, k;


int main() {

	// writes array
	for (int i = 0; i <= 16; ++i)
	{
		a[i] = i;
		// output each array element's value
		printf("Element[%d] = %d\n", i, a[i] );

	}

	// int k = sizeof(a);
	// printf("%d\n", k);

	reverses(a);

	for (int i = 0; i <= 16; ++i)
	{
		// output each array element's value
		printf("Element[%d] = %d\n", i, a[i] );

	}

	return 0;

}

	// function definition 
	void reverses(int a[16]) {


	for (int j = 0; j < 16/2; j++ ) 
	{
		int other = 16 - j;
		int temp = a[j];
		a[j] = a[other];
		a[other] = temp;
	}



	}




//int = 4 bytes;

