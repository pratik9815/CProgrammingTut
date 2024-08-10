#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *reverseStr(char *str)
{
    if (str == NULL)
        return NULL;
    // first calculate the size of the string
    int size = 0;
    while (*(str + size) != '\0')
    {
        size++;
    }
    int actual_size = size - 1;

    printf("%d\n", actual_size);

    for (int i = 0; i < actual_size / 2; i++)
    {
        char temp = str[i];
        str[i] = str[actual_size - i - 1];
        str[actual_size - i - 1] = temp;
    }
    return str;
}
int main()
{
    char *str = (char *)malloc(20 * sizeof(char));
    if (str == NULL)
    {
        perror("Unable to allocate memory");
        return EXIT_FAILURE;
    }
    printf("Enter the string you want to reverse.\n");
    // scanf("%s", str);
    fgets(str, 20, stdin); // always returns size + 1 of actual size of string because of extra line added by it
    printf("%s", str);
    char *revstr = reverseStr(str);
    printf("After the reversal of string %s", revstr);
    free(str);
    free(revstr);
    return 0;
}