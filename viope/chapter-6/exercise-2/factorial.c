#include <stdio.h>

int main(void)
{
	int number, sum;
	printf("Enter an integer: ");
	scanf("%d", &number);
	sum = number;

	for (int i = 2; i < number; i++)
		sum *= i;

	printf("The factorial of %d is %d\n", number, sum);

	return 0;
}