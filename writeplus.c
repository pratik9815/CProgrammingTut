#include <stdio.h>

int main()
{
    // w+ reading and writing
    // create a file if does not exists
    // file exists then erase the previous content and write new content

    FILE *fp;
    char ch;
    char str[100];
    fp = fopen("bcd.txt", "w+");
    if (fp == NULL)
    {
        perror("Error opening file\n");
        return -1;
    }

    printf("Enter the content you want to write in the file.\n");
    fgets(str, 100, stdin);

    fputs(str, fp);

    rewind(fp); // Move the pointer to the start of the file

    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}