#include <stdio.h>
#include <stdlib.h>

void StringConcatenate(char *str1, char *str2)
{
    char *start = str1;
    while (*str1 != '\0')
    {
        str1++;
    }
    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
    printf("The concatenated string is %s ", start);
}

int main()
{
    char *str1 = (char *)malloc(100 * sizeof(char));
    char *str2 = (char *)malloc(100 * sizeof(char));
    if (str1 == NULL || str2 == NULL)
    {
        printf("Memory allocation failed.\n");
    }

    printf("Enter the first character \n");
    scanf("%s", str1);
    printf("Enter the second character \n");
    scanf("%s", str2);

    // char *str3 =
    StringConcatenate(str1, str2);

    // printf("The concatenated string is %s \n", str3);

    free(str1);
    free(str2);
    // free(str3);
    return 0;
}