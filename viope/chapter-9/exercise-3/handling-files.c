#include <stdio.h>

int main()
{

	FILE *file_handleA = fopen("mata.txt", "r");
	FILE *file_handleB = fopen("matb.txt", "r");
	FILE *file_handleSum = fopen("sum.usr", "w");

	int matrixA[10][10];
	int matrixB[10][10];
	int sumMatrix[10][10];

	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			fscanf(file_handleA, "%d ", &matrixA[y][x]);
			fscanf(file_handleB, "%d ", &matrixB[y][x]);
			sumMatrix[y][x] = matrixA[y][x] + matrixB[y][x];
			fprintf(file_handleSum, "%d", sumMatrix[y][x]);

			if (x != 9)
			{
				fprintf(file_handleSum, " ", sumMatrix[y][x]);
			}
		}
		if (y != 9)
		{
			fprintf(file_handleSum, "\n");
		}
	}

	printf("The sum of the matrices has been calculated into the file sum.usr.\n");

	fclose(file_handleA);
	fclose(file_handleB);
	fclose(file_handleSum);

	return 0;
}