#include <stdio.h>

int main(void)
{
	int integer;
	float decimal;
	printf("Enter an integer: ");
	scanf("%d", &integer);
	printf("Enter a decimal number:");
	scanf("%f", &decimal);

	printf("\nYou entered the integer: %d\n", integer);
	printf("You entered the decimal number, rounded to two decimal places: %.2f\n", decimal);
	return 0;
}