#include <stdio.h>
#include <stdlib.h>

int *returnArray()
{
    int *arr = (int *)malloc(4 * sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the %d element.\n", i + 1);
        scanf("%d", arr + i); // arr should remain constant we can also use &arr[i] alternatively
    }
    return arr;
}

int main()
{
    int *arr = returnArray();
    printf("Your array is : \n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}