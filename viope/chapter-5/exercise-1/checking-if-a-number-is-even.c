#include <stdio.h>

int main(void)
{
	int number;
	printf("Enter an integer: ");
	scanf("%d", &number);

	if (number % 2 == 0)
	{
		printf("Number %d is even.", number);
	}
	else
	{
		printf("Number %d is odd.", number);
	}

	return 0;
}