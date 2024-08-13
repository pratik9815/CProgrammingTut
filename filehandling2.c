#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    file = fopen("abc.txt", "w");
    char a = 'P';
    fputc(a, file); // writes a single character to the file
    fclose(file);

    file = fopen("abc.txt", "a");

    char name[] = " Pratik";
    for (int i = 0; i < strlen(name); i++)
    {
        fputc(name[i], file);
    }
    fclose(file);
    // maiking it simpler is to use fputs
    char lastName[] = " Chamlagain";
    file = fopen("abc.txt", "a");
    if (file == NULL)
    {
        perror("Error opening file\n");
        return -1;
    }
    fputs(lastName, file);
    fclose(file);

    // fprintf is used for mixed data type

    file = fopen("abc.txt", "a");
    int value = 100;
    int value2;

    printf("Enter another value you want to enter in the file\n");
    scanf("%d", &value2);

    if (file == NULL)
    {
        perror("Error opening file\n");
        return -1;
    }

    fprintf(file, " The value is %d from the file and %d from the user.\n", value, value2);
    fclose(file);

    file = fopen("abc.txt", "r");
    char str[100];
    if (file == NULL)
    {
        perror("Error opening file\n");
        return -1;
    }
    while (fgets(str, 100, file))
    {
        printf("Read from file : %s\n", str);
    }
    fclose(file);
    return 0;
}