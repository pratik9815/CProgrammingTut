#include <stdio.h>
int main()
{
    char name[] = "Pratik Chamlagain";
    // to print the whole string
    printf("%s\n", name);
    // to print only few character
    printf("%c\n", name[0]);
    // length of this array of characters can be determined as
    int length = sizeof(name) / sizeof(char);
    int i = 0;
    // This is another way of printing the charaters since in c the last character is always \0 and by identifying its position
    // we can determine the length of the string
    while (1)
    {
        if (name[i] == '\0')
        {
            break;
        }
        printf("%c", name[i]);
        i++;
    }

    // special characters or escape characters
    char name1[] = "Pratik \"Bahadur\" Chamlagain";
    char txt[] = "It\'s alright";
    printf("\n%s\n", txt);

    // to use string function use use #include<string.h>
    return 0;
}