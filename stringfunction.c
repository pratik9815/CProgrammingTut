#include <string.h>
#include <stdio.h>
int main()
{
    char txt[] = "Hello, World!";
    char txt2[] = "Hello, Moon!";
    // this determines the length of the string
    printf("%s\n", strlen(txt));
    // this concatenates two string
    printf("%s\n", strcat(txt, txt2));
    // copy st1 to str2
    // strcpy(str2, str1);
    // compare str1 to str2
    // strcmp(str1, str2);

    return 0;
}