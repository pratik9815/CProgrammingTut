#include <stdio.h>
#include <string.h>

int main()
{
    char *name = "Pratik";

    printf("%s\n", name);

    // gets(char* str)
    // char s[30];
    // printf("Enter the first string: \n");
    // gets(s);
    // puts(s);
    // since performing the gets() function is risky since it doesn't perform any array bound checking and keeps reading the characters
    // until the new line (enter) is encountered. It suffers buffer overflow, which can be avoided by using fgets(). The fgets() ensures that
    // not more than maximum limit of character are read
    // char  *fgets(char* str, int n, FILE *stream);
    // char s1[20];
    // printf("Enter the second string: \n");
    // fgets(s1, 30, stdin);
    // puts(s1);

    // puts(const char* str)

    // string functions
    printf("%d\n", strlen(name));

    char result[20];

    strcpy(result, name); // destination , source
    puts(result);

    char concat[20] = " Chamlagain";
    strcat(result, concat); // first_string, second_string and is stored in first_string
    puts(result);

    int comp = strcmp(result, name); // returns 0 if both strings are equal and 1 if not equal
    printf("%d\n", comp);

    printf("%s\n", strrev(result));

    // for lowercase we use strlwr(char *str)
    // for uppercase we use strupr(char *str)
    return 0;
}