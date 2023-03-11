#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int main()
{
	FILE* pfile;

	pfile = fopen("1.txt", "r");

	if (pfile == nullptr)
	{
		std::cout << "File isnt open\n";
		exit(EXIT_FAILURE);
	}

	FILE* pfile2;

	pfile2 = fopen("2.txt", "w");

	if (pfile2 == nullptr)
	{
		std::cout << "File isnt open\n";
		exit(EXIT_FAILURE);
	}

	char str[100];
	int i = 0;
	while (!feof(pfile))
	{
		if (fgets(str, 126, pfile))
		{
			std::cout << str;
			fprintf(pfile2, "%s", str);
			i++;
		}
	}

	std::cout << '\n';
}
