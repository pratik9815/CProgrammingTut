#include <stdio.h>
int main()
{
    FILE *file = NULL;
    file = fopen("file.txt", "r");
    if (file == NULL)
    {
        perror("The file does not exist.\n");
        return -1;
    }
    // char ch = getc(file); // reads only one character from the file pointed by the pointer
    char ch;
    // for all the function
    while (!feof(file))
    {
        ch = getc(file);
        printf("%c", ch);
    }
    fclose(file);

    // using gets
    file = fopen("abc.txt", "r");
    if (file == NULL)
    {
        perror("Error reading the file\n");
        return -1;
    }
    char filevalue[50]; // used to keep the value read from the file
    fgets(filevalue, 50, file);
    printf("%s", filevalue);

    // for printing multiple lines using fgets we will use while loop using feof function
    return 0;
}