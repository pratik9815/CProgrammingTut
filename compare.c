#include <stdio.h>
#include <stdlib.h>

// compare two strings
void CompareString(char *str1, char *str2)
{
    int flag = 0;
    // we can do any of the below
    //  while (str1[i] != '\0' && str2[i] != '\0')
    //  {
    //      if (str1[i] != str2[i])
    //      {
    //          flag = 1;
    //          break;
    //      }
    //      i++;
    //  }

    // here we are utilizing the pointer to th strings and utilizing the pointer arthmetic
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
        {
            flag = 1;
            break;
        }
        str1++;
        str2++;
    }
    if (flag == 0)
    {
        printf("The given strings are same.\n");
    }
    else
    {
        printf("The given strings are not same.\n");
    }
}
int main()
{
    char *str1;
    char *str2;

    str1 = (char *)malloc(100 * sizeof(char));
    str2 = (char *)malloc(100 * sizeof(char));

    if (str1 == NULL || str2 == NULL)
    {
        printf("Memory allocation failed.\n");
    }

    printf("Enter the first string: \n");
    scanf("%s", str1);

    printf("Enter the second string: \n");
    scanf("%s", str2);

    CompareString(str1, str2);

    free(str1);
    free(str2);

    return 0;
}