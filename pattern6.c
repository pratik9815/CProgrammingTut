#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("\t");
        }
        for (int k = 0; k < 5 - i; k++)
        {
            printf("*\t");
        }

        printf("\n");
    }
}