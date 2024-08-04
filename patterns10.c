#include <stdio.h>

int main()
{
    int row = 5, col = 5;

    for (int i = 0; i < 2 * row - 1; i++)
    {
        int temp;
        if (i < col)
        {
            temp = 2 * (col - i) - 1;
        }
        else
        {
            temp = 2 * (i - col + 1) + 1;
        }

        for (int j = 0; j < temp; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * col - temp; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}