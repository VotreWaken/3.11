#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	FILE* pfile;

	FILE* pfile2;

	pfile = fopen("1.txt", "r");
	if (pfile == NULL)
	{
		std::cout << "File isnt open\n";
		exit(EXIT_FAILURE);
	}

	if ((pfile2 = fopen("2.txt", "w")) == NULL)
	{
		std::cout << "File isnt open\n";
		exit(EXIT_FAILURE);
	}

	char str[30];
	while (!feof(pfile))
	{
		fscanf(pfile, "%s", str);
		if (strlen(str) >= 7)
		{
			fprintf(pfile2, "%s ", str);
		}
	}
	fclose(pfile2);
}
