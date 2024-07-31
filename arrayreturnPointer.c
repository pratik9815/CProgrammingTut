#include <stdio.h>
#include <stdlib.h>

// both the initialization are correct the int* specified is for type safty
//  int *array = malloc(5 * sizeof(int));

// calloc and malloc type
//  malloc purpose allocates block of memory of a specified data. The contents of the allocated memory are uninitialized, meaning they contain garbage value
//  malloc takes single parameter i.e the size of the memory to allocate
//  calloc allocates memory for an array of elements and initializes all bytes to zero
//  calloc takes 2 parameter the number of elements and size of each element
int *returnArrayUsingMalloc()
{
    int *array = (int *)malloc(5 * sizeof(int));
    if (array == NULL)
    {
        return NULL;
    }
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;
    array[4] = 50;
    return array;
}

int *returnArrayUsingCalloc()
{
    int *array = (int *)calloc(5, sizeof(int));
    if (array == NULL)
    {
        return NULL;
    }
    printf("Enter 5 elements of the array.\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    return array;
}

int main()
{
    int *ptr = returnArrayUsingMalloc();
    for (int i = 0; i < 5; i++)
    {
        // printf("%d\n", ptr[i]);
        printf("%d\t", *(ptr + i));
    }

    int *ptr2 = returnArrayUsingCalloc();
    for (int i = 0; i < 5; i++)
    {
        // printf("%d\n", ptr[i]);
        printf("%d\t", *(ptr2 + i));
    }

    free(ptr2);
    free(ptr);
    return 0;
}