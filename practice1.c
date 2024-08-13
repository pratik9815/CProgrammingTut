#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int **matrix = (int **)malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        matrix[i] = (int *)malloc(3 * sizeof(int));
    }
    printf("Enter the first matrix.\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of matrix[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}