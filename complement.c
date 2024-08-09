#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of digits :\n");
    scanf("%d", &n);
    char *binary = (char *)malloc(n * sizeof(char));

    printf("Enter the binary number :\n");
    scanf("%s", binary);

    char *onecomplement = (char *)malloc(n * sizeof(char));

    for (int i = 0; i < n; i++)
    {
        if (binary[i] == '0')
        {
            onecomplement[i] = '1';
        }
        else if (binary[i] == '1')
        {
            onecomplement[i] = '0';
        }
    }
    printf("One's Complement :%s\n", onecomplement);

    // for two's complement, use the one's complement and add 1

    int carry = 1;
    char *twocomplement = (char *)malloc(n * sizeof(char));

    for (int i = n - 1; i >= 0; i--)
    {
        if (onecomplement[i] == '1' && carry == 1)
        {
            twocomplement[i] = '0';
        }
        else if (onecomplement[i] == '0' && carry == 1)
        {
            carry = 0;
            twocomplement[i] = '1';
        }
        else
        {
            *(twocomplement + i) = *(onecomplement + i);
        }
    }
    twocomplement[n] = '\0';
    printf("Two's Complement :%s\n", twocomplement);

    free(onecomplement);
    free(twocomplement);
    return 0;
}