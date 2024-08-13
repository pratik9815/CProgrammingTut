#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int count = 1;
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file\n");
        return -1;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            count++;
        }
    }
    printf("The number of lines in the file is %d.\n", count);
    return 0;
}