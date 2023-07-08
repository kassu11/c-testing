#include <stdio.h>

int main(void)
{
	int integer;
	printf("Enter an integer: ");
	scanf("%d", &integer);

	printf("The number is %d\n", integer % 2);
	return 0;
}