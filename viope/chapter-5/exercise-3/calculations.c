#include <stdio.h>

int main(void)
{
	int state, num1, num2;

	printf("1: subtraction\n");
	printf("2: addition\n");
	printf("3: multiplication\n");

	printf("Select function:");
	scanf("%d", &state);
	printf("Enter the first number:");
	scanf("%d", &num1);
	printf("Enter the second number:");
	scanf("%d", &num2);

	if (state == 1)
	{
		printf("%d-%d=%d", num1, num2, num1 - num2);
	}
	else if (state == 2)
	{
		printf("%d+%d=%d", num1, num2, num1 + num2);
	}
	else if (state == 3)
	{
		printf("%d*%d=%d", num1, num2, num1 * num2);
	}

	return 0;
}