#include <stdio.h>

int main()
{
    // a+ is for reading and appending // if the file does not exists it returns error
    //  and if it exists we can read and append any text at the end of the file
    FILE *file;
    file = fopen("bcd.txt", "a+");
    if (file == NULL)
    {
        perror("Error opening file\n");
        return -1;
    }
    fputs("\nHello, World!\n", file);
    rewind(file);
    char ch;
    while (!feof(file))
    {
        ch = fgetc(file);
        printf("%c", ch);
    }
    fclose(file);
    return 0;
}