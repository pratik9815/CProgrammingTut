#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {

        for (int k = 0; k < 5 - i; k++)
        {
            printf("\t");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}