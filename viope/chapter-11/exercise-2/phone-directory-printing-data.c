#include <stdio.h>

int main(void)
{
	char fName[255] = "";
	FILE *file_handlePhoneRead = fopen("phonedir.txt", "r");

	int rowNum;
	fscanf(file_handlePhoneRead, "%d\n", &rowNum);

	for (int i = 0; i < 100; i++)
	{
		if (fgets(fName, 255, file_handlePhoneRead) == NULL)
			break; // Breaks when file is empty
		printf("%s", fName);
	}
	fclose(file_handlePhoneRead);

	return 0;
}