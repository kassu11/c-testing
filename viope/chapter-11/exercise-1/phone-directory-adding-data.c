#include <stdio.h>

int main(void)
{
	char fName[255] = "", lName[255] = "", number[255] = "";
	FILE *file_handlePhoneRead = fopen("phonedir.txt", "r");
	FILE *file_handleTemp = fopen("temp.txt", "w");

	if (file_handlePhoneRead == NULL || file_handleTemp == NULL)
	{
		printf("Error opening file\n");
		return 0;
	}

	int rowNum;
	fscanf(file_handlePhoneRead, "%d", &rowNum);
	fprintf(file_handleTemp, "%d", rowNum + 1);

	for (int i = 0; i < 100; i++)
	{
		if (fgets(fName, 255, file_handlePhoneRead) == NULL)
			break; // Breaks when file is empty
		fscanf(file_handlePhoneRead, "%s %s %s", &fName, &lName, &number);
		fprintf(file_handleTemp, "\n%s %s %s", fName, lName, number);
	}
	fclose(file_handlePhoneRead);

	printf("Enter first name:");
	scanf("%s", &fName);
	printf("Enter last name:");
	scanf("%s", &lName);
	printf("Enter telephone number:");
	scanf("%s", &number);
	printf("Successfully saved the data.");

	fprintf(file_handleTemp, "\n%s %s %s", fName, lName, number);
	fclose(file_handleTemp);

	remove("phonedir.txt");
	rename("temp.txt", "phonedir.txt");

	return 0;
}