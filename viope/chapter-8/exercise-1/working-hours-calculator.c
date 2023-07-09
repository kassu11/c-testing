#include <stdio.h>

int main(void)
{
	int days;
	float hours[30];
	float sum = 0;
	printf("The program calculates the total hours worked during\n");
	printf("a specific period and the average length of a day.\n");
	printf("\nHow many days:");
	scanf("%d", &days);

	for (int i = 0; i < days && i < 30; i++)
	{
		printf("Enter the working hours for day %d:", i + 1);
		scanf("%f", &hours[i]);
		sum += hours[i];
	}

	printf("\nTotal hours worked: %.1f", sum);
	printf("\nAverage length of day: %.1f", sum / days);
	printf("\nHours entered:");

	for (int i = 0; i < days && i < 30; i++)
	{
		printf(" %.1f", hours[i]);
	}

	return 0;
}