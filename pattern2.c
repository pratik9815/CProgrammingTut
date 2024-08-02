#include <stdio.h>

// left half pyramid
int main()
{
    int rows = 5;
    // outer loop are always for rows and inner loop are always for columns
    for (int i = 0; i < rows; i++)
    {
        // we need two loops one for spaces and one for star print
        for (int k = 0; k < rows - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}