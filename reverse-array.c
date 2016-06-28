#include <stdio.h>

//reversal function felclaration 
void reverses();
int n[16];
int i, j;


int main() {

	reverses(n);

	return 0;

}

	// function definition 
	void reverses(int n[12]) {

	// writes array
	for (int i = 0; i <= 12; ++i)
	{
		n[i] = i;
		// output each array element's value
		printf("Element[%d] = %d\n", i, n[i] );
	}


	for (int j = 0; j < 16/2; j++ ) 
	{

		int other = 16 - j - 1;

		int temp = n[j];

		n[j] = n[other];

		n[other] = temp;

	}



	}






