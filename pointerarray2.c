#include <stdio.h>
void printArray(int *arr, int length)
{
    // printf("%d\n", *(arr + 1));

    for (int i = 0; i < length; i++)
    {
        // printf("%d \t", *(arr + i));
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int lengthOfArray = sizeof(arr) / sizeof(int);

    printArray(arr, lengthOfArray);
    return 0;
}