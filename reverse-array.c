#include <stdio.h>

//reversal function felclaration 
void reverses();
int n[12];
int i, j, k;


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
		// printf("Element[%d] = %d\n", i, n[i] );
	}


	for (int j = 0; j < 12/2; j++ ) 
	{
		//n[j]: 0, 1, 2, 3, 4, 5
		int other = 12 - j - 1;
		//other: 11, 10, 9, 8, 7, 6
		int temp = n[j];
		//temp: 0, 1, 2, 3, 4, 5
		n[j] = n[other];
		//n[other] 11, 10, 9, 8, 7, 6
		n[other] = temp;
		//n[other] 0, 1, 2, 3, 4, 5
		printf("%d\n", n[other]);
	}



	}






