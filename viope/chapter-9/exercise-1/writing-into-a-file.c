#include <stdio.h>

int main()
{

	FILE *pFile = fopen("hello.usr", "w");

	printf("Writing to the file was successful.\n");
	printf("Closing the program.\n");

	fprintf(pFile, "Hello world!\n");
	fclose(pFile);

	return 0;
}