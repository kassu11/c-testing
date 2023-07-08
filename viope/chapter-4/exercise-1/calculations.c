#include <stdio.h>

int main(void)
{
	int integer1, integer2;
	printf("Enter the first number:");
	scanf("%d", &integer1);
	printf("Enter the second number:");
	scanf("%d", &integer2);

	printf("\n%d+%d=%d", integer1, integer2, integer1 + integer2);
	printf("\n%d-%d=%d", integer1, integer2, integer1 - integer2);
	printf("\n%d*%d=%d\n", integer1, integer2, integer1 * integer2);
	return 0;
}