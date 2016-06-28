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


		for (int j = 0; j < 12/2; j++ ) {
			//creats a counter that counts down from half way through array but ignores median
			int other = 6 - j - 1;
			// printf("this is other: "); 
			// printf("%d\n", other);

			//temp holds 
			int temp = n[j];
			printf("this is temp:");	
			printf("%d\n", temp);
			// n[j] = n[other];
			// n[other] = temp;
		}

	}