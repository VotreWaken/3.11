#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int main()
{
    FILE* pfile;
    char ch, buf[500];
    int i = 0;


    pfile = fopen("1.txt", "r");
    if (pfile == nullptr)
    {
        std::cout << "File isnt open\n";
        exit(EXIT_FAILURE);
    }

    ch = getc(pfile);
    while (ch != EOF)
    {
        putchar(ch);
        buf[i] = ch;
        i++;
        ch = getc(pfile);
    }

    pfile = fopen("2.txt", "w");

    if (pfile == nullptr)
    {
        std::cout << "File isnt open\n";
        exit(EXIT_FAILURE);
    }

    for (int j = (i - 1); j >= 0; j--)
    {
        ch = buf[j];
        fprintf(pfile, "%c", ch);
    }
    fclose(pfile);
}