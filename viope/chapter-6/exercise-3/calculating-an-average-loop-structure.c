#include <stdio.h>

int main(void)
{

	printf("The program calculates the average of scores you enter.\n");
	printf("End with a negative integer.\n");

	float score, sum = 0;
	int count = 0;
	while (1 < 2)
	{
		printf("Enter score (4-10):");
		scanf("%f", &score);

		if (score >= 4 && score <= 10)
		{
			count++;
			sum += score;
		}
		else if (score < 0)
		{
			break;
		}
	}

	printf("You entered %d scores.\n", count);
	printf("Average score: %.2f\n", sum / count);

	return 0;
}