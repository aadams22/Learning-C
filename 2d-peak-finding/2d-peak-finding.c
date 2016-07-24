#include <stdio.h>
#include <stdlib.h>

void twoDPeak(int mat[], size_t len);


int main(int argc, char** argv){
	int mat[10][10];

	for (int i = 0; i < argc; ++i)
	{
		printf("arg %d is %s\n", i, argv[i]);
	}


	char* ptr;
	unsigned int length_x = strtol(argv[1], &ptr, 10);
	unsigned int length_y = strtol(argv[2], &ptr, 10);

	int x[length_x];
	int y[length_y];

	for (int i = 0; i < length_x; ++i)
	{
		for (int j = 0; j < length_y; ++j)
		{
			mat[i][j] = rand() % 100;
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}

	// twoDPeak();

}

void twoDPeak(int mat[], size_t len) {

}