#include <stdio.h>

int main(void)
{
	int integer;
	printf("Enter an integer: ");
	scanf("%d", &integer);
	printf("The square of the number you entered is %d\n", integer * integer);
	return 0;
}