#include <stdio.h>

int main(void)
{
	int selection, num1, num2;
	while (1 < 2)
	{
		printf("1: sum of two numbers\n");
		printf("2: difference of two numbers\n");
		printf("3: product of two numbers\n");
		printf("<0: terminate the program\n");

		printf("Select calculation:");
		scanf("%d", &selection);

		if (selection < 0)
		{
			break;
		}
		printf("Enter the first number:");
		scanf("%d", &num1);
		printf("Enter the second number:");
		scanf("%d", &num2);

		if (selection == 1)
		{
			printf("%d + %d = %d\n\n\n", num1, num2, num1 + num2);
		}
		else if (selection == 2)
		{
			printf("%d - %d = %d\n\n\n", num1, num2, num1 - num2);
		}
		else if (selection == 3)
		{
			printf("%d * %d = %d\n\n\n", num1, num2, num1 * num2);
		}
	}

	printf("Terminating the program...\n");
	return 0;
}