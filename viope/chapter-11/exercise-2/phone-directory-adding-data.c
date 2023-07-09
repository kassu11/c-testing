#include <stdio.h>

int main(void)
{
	char fName[255] = "", lName[255] = "", number[255] = "";
	FILE *file_handlePhoneRead = fopen("phonedir.txt", "r");

	int rowNum;
	fscanf(file_handlePhoneRead, "%d", &rowNum);

	for (int i = 0; i < 100; i++)
	{
		if (fgets(fName, 255, file_handlePhoneRead) == NULL)
			break; // Breaks when file is empty
		fscanf(file_handlePhoneRead, "%s %s %s", &fName, &lName, &number);
		printf("%s %s %s\n", fName, lName, number);
	}
	fclose(file_handlePhoneRead);

	return 0;
}