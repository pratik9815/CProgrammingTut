#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows1, cols1, rows2, cols2;
    int **mat1;
    int **mat2;
    printf("Enter the number of rows and columns of the first matrix\n");
    scanf("%d%d", &rows1, &cols1);
    mat1 = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++)
    {
        *(mat1 + i) = (int *)malloc(cols1 * sizeof(int));
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("Enter matrix1[%d][%d]: \n", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix\n");
    scanf("%d%d", &rows2, &cols2);
    mat2 = (int **)malloc(rows2 * sizeof(int *));
    for (int i = 0; i < rows2; i++)
    {
        *(mat2 + i) = (int *)malloc(cols2 * sizeof(int));
    }
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("Enter matrix1[%d][%d]: \n", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    int **matResult;
    matResult = (int **)malloc(rows1 * sizeof(int *));

    for (int i = 0; i < rows1; i++)
    {
        matResult[i] = (int *)malloc(cols2 * sizeof(int));
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            matResult[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                matResult[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("Enter matrix1[%d][%d]: %d\n", i + 1, j + 1, matResult[i][j]);
        }
    }

    return 0;
}