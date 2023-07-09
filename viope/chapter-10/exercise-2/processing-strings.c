#include <stdio.h>

int main(void)
{
	char text[15 + 1] = "auto";
	int sum = 0;

	printf("The program calculates the number of vowels.\n");
	printf("Enter a word:");
	scanf("%s", &text);

	for (int i = 0; i < 16; i++)
	{
		if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'y')
		{
			sum++;
		}
	}

	printf("The word contains %d vowels.", sum);

	return 0;
}