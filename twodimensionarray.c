#include <stdio.h>
int main()
{
    //      column1 column2 column3
    // row1 x[0][0] x[0][1] x[0][2]
    // row2 x[1][0] x[1][1] x[1][2]
    // row3 x[2][0] x[2][1] x[2][2]
    // in computation, row major order and column major order are methods for storing multidimensional arrays
    // in linear storage such as ram
    // The difference between the orders lies in which elements of the array are contigous in memory.
    // row major and column major
    // can be declared as
    int myNumbers[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int myNumbersrow[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // accessing the element
    printf("%d\n", myNumbers[0][0]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", myNumbers[i][j]);
        }
        printf("\n");
    }
    // time complexity here will be O(N*M) since we are iterating through two loops

    return 0;
}