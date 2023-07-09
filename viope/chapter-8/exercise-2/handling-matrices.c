#include <stdio.h>

int main(void)
{
	int sum = 0;
	int matrix[5][5] = {
			4, 6, 25, 88, 5,
			34, 5, 300, 4, 65,
			78, 43, 11, 90, 125,
			98, 585, 12, 63, 21,
			45, 35, 9, 5, 1};

	printf("In the array:\n");
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			sum += matrix[y][x];
			printf("%d ", matrix[y][x]);
		}
		printf("\n");
	}

	printf("\nthe sum of the elements is %d\n", sum);

	return 0;
}