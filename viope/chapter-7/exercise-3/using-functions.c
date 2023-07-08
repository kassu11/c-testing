#include <stdio.h>

int smallest(int, int, int);
int largest(int, int, int);

int main(void)
{
	int num1, num2, num3;
	printf("Enter the 1. number:");
	scanf("%d", &num1);
	printf("Enter the 2. number:");
	scanf("%d", &num2);
	printf("Enter the 3. number:");
	scanf("%d", &num3);

	printf("Among the numbers you entered,\n");
	int min = smallest(num1, num2, num3);
	int max = largest(num1, num2, num3);
	printf("the largest was %d and the smallest was %d.\n", max, min);

	return 0;
}

int smallest(value1, value2, value3)
{
	if (value1 < value2 && value1 < value3)
	{
		return value1;
	}
	else if (value2 < value1 && value2 < value3)
	{
		return value2;
	}
	else
	{
		return value3;
	}
}

int largest(value1, value2, value3)
{
	if (value1 > value2 && value1 > value3)
	{
		return value1;
	}
	else if (value2 > value1 && value2 > value3)
	{
		return value2;
	}
	else
	{
		return value3;
	}
}