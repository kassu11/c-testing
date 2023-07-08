#include <stdio.h>

int main(void)
{
	float markka;
	printf("Enter an amount in FIM:");
	scanf("%f", &markka);
	float euro = markka / 5.94573;
	printf("FIM converted to euro: %.2f\n", euro);

	return 0;
}