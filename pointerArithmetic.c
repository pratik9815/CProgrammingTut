#include <stdio.h>
int addition()
{
    int a = 10;
    int b = 20;
    int c = a + b;
    return c;
}
int additionwithparam(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int a = 10;
    int *ptr = &a;

    printf("%d\n", ptr);

    printf("%d\n", ptr + 1);

    // and if we dereferecne this pointer with increment we can get the value of next pointer

    // pointer to a function in c
    int result;
    int (*ptr1)();
    ptr1 = &addition;
    // two ways of doing same thing
    result = ptr1();
    // result = (*ptr1)();
    printf("%d\n", result);

    // with params in pointer to a function
    int (*ptr2)(int, int);
    int result;
    ptr2 = &additionwithparam;
    result = ptr2(10, 20);

    return 0;
}