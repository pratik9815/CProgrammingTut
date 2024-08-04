#include <stdio.h>

int main()
{

    for (int i = 0; i < 5; i++)
    {

        for (int k = 0; k < i; k++)
        {
            printf("\t");
        }
        for (int j = i; j < 5 - i; j++)
        {
            printf("*\t");
        }
        for (int l = 0; l < 5 - i; l++)
        {
            printf("\t");
        }

        printf("\n");
    }
    return 0;
}