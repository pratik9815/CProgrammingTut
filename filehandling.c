#include <stdio.h>

int main()
{
    // functions in c programming
    // fopen(filename/filepath,mode of file)
    // fclose(FILE *stream)

    // r mode : Open for reading (file must exist).
    // w mode : Open for writing. The file is created (if it does not exist) or truncated (if it exists).
    // a mode : Open for writing. The file is created if it does not exist.
    // r+ mode : Open for reading and writing. The file must exist.
    // w+ mode : Open for reading and writing. The file is created (if it does not exist) or truncated (if it exists).
    // a+ mode : Open for reading and writing. The file is created if it does not exist.

    // fgetc(FILE *stream): Reads a single character.
    // fgets(char *str, int num, FILE *stream): Reads a string of up to num - 1 characters or until a newline or EOF.
    // fread(void *ptr, size_t size, size_t count, FILE *stream): Reads a block of data.

    // fputc(char c, FILE *stream): Writes a single character.
    // fputs(const char *s, FILE *stream): Writes a string.
    // fwrite(const void *ptr, size_t size, size_t count, FILE *stream): Writes a block of data.

    FILE *fp;
    fp = fopen("file.txt", "w");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }
    fputs("Hello, World!\n", fp);
    fclose(fp);

    fp = fopen("file.txt", "a");
    if (fp == NULL)
    {
        perror("Error opening file for appending.");
        return 1;
    }
    fputs("This is appended text.\n", fp);
    fclose(fp);

    fp = fopen("file.txt", "a");
    char s[] = "This is a string";
    int value = 10;
    if (fp == NULL)
    {
        perror("Error opening file for appending.");
        return 1;
    }
    // WRITING ANY KIND OF TEXT OR NUMBER CONTENT IN FILE IS DONE BY USING FPRINTF
    fprintf(fp, "The value is %d\n", value);
    fprintf(fp, "The string is %s\n", s);
    fclose(fp);
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // print the content of file fgets stores the content in str and printf prints the file content
    char str[100];
    while (fgets(str, sizeof(str), fp) != NULL)
    {
        printf("Read from file : %s", str);
    }
    fclose(fp);

    return 0;
}