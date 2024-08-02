#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        // for spaces
        for (int j = 0; j < 5 - i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}