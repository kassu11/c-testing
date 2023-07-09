#include <stdio.h>

int main()
{

	FILE *file_handle = fopen("numbers.s", "r");
	int number1, number2, number3, number4;

	fscanf(file_handle, "%d %d %d %d ", &number1, &number2, &number3, &number4);

	printf("Numbers found in the file numbers.s:\n");
	printf("%d, %d, %d and %d\n", number1, number2, number3, number4);
	printf("\nSum of the numbers: %d", number1 + number2 + number3 + number4);

	fclose(file_handle);

	return 0;
}