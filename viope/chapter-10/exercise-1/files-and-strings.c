#include <stdio.h>

int main(void)
{
	char firstName[255];
	char lastName[255];
	char fileName[255];

	printf("The program saves your first and last name into a file.\n");
	printf("Enter your first name:");
	scanf("%s", &firstName);
	printf("Enter your last name:");
	scanf("%s", &lastName);
	printf("File where you want to save your name:");
	scanf("%s", &fileName);

	FILE *pFile = fopen(fileName, "w");

	fprintf(pFile, "%s %s", firstName, lastName);

	fclose(pFile);

	printf("\n\nSuccessfully saved the data!");

	return 0;
}