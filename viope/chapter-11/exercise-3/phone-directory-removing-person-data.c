#include <stdio.h>
#include <string.h>

int main(void)
{
	char fName[255] = "", lName[255] = "", number[255] = "";
	FILE *file_handlePhoneRead = fopen("phonedir.txt", "r");

	if (file_handlePhoneRead == NULL)
	{
		printf("Error opening file\n");
		return 0;
	}

	char searchFName[255] = "", searchLName[255] = "";
	printf("Enter first name:");
	scanf("%s", &searchFName);
	printf("Enter last name:");
	scanf("%s", &searchLName);

	int rowNum;
	fscanf(file_handlePhoneRead, "%d", &rowNum);

	for (int i = 0; i < 100; i++)
	{
		if (fgets(fName, 255, file_handlePhoneRead) == NULL)
			break; // Breaks when file is empty

		fscanf(file_handlePhoneRead, "%s %s %s", &fName, &lName, &number);
		if (strcmp(searchFName, fName) == 0 && strcmp(searchLName, lName) == 0)
		{
			printf("Data removed from the directory.");
			break;
		}
	}
	fclose(file_handlePhoneRead);

	return 0;
}