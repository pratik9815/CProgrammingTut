
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("%d %d \n", *a, *b);
}

void swapwithoutpointer(int a, int b)
{
    int temp = 0;
    temp = b;
    b = a;
    a = temp;
    printf("%d %d \n", a, b);
}

void swapwithouttempvariable(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("%d %d \n", a, b);
}
void swapusingadditionandsubtraction(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d \n", a, b);
}

int main()
{
    int a = 5, b = 10;
    swap(&a, &b);
    // by using pointer we can swap the two variable globally but by using the swapwithoutpointer we can swap the variable locally only
    //  that means that the swap will not reflect in the main function but only in the local function
    swapwithoutpointer(5, 10);
    swapwithouttempvariable(5, 10);
    return 0;
}