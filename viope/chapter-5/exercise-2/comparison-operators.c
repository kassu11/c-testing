#include <stdio.h>

int main()
{
	char drink;
	printf("Do you drink coffee or tea (c/t)?");
	scanf("%c", &drink);

	int cups;
	printf("How many cups do you drink daily:");
	scanf("%d", &cups);

	if (drink == 'c')
	{
		if (cups >= 0 && cups <= 2)
		{
			printf("You don't drink a lot of coffee, do you?");
		}
		if (cups >= 3 && cups <= 20)
		{
			printf("You drink a lot of coffee!");
		}
	}
	else if (drink == 't')
	{
		if (cups >= 0 && cups <= 2)
		{
			printf("You do not drink a lot of tea.");
		}
		if (cups >= 3 && cups <= 20)
		{
			printf("You drink a lot of tea!");
		}
	}
	else
	{
		printf("An error occurred in the program!");
	}

	return 0;
}