#include <stdio.h>
void strconcat(char *s1, char *s2)
{
    while (*s1 != '\0')
    {
        *s1++;
    }
    while (*s2 != '\0')
    {
        *s1++ = *s2++;
    }
    *s1 = '\0';
}
int main()
{
    char s1[] = "Hello";
    char s2[] = "World";

    strconcat(s1, s2);

    printf("The concatination of string is %s\n", s1);
    return 0;
}