#include <stdio.h>

//reversal function felclaration 
void reverses();
int a[16];
int i, j, k;


int main() {


	for (int i = 0; i <= 16; ++i) 	// writes array
	{
		a[i] = i;
		printf("Element[%d] = %d\n", i, a[i] ); // output each array element's value
	}

	int k = sizeof(a);
	printf("%d\n", k);

	reverses(a); 	//reverses array

	for (int i = 0; i <= 16; ++i)
	{
		printf("Element[%d] = %d\n", i, a[i] ); // output each array element's value

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

