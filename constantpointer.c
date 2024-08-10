#include <stdio.h>

int main()
{
    // Null pointer references to 0th memory location
    int *nullPointer = NULL;
    int a = 10;
    int b = 20;
    int *p;

    // a constant poitner in c cannot change the address of the variable to which it is pointing.
    //  this is a constant pointer
    //   assignment is readonly
    //   ptr = &b;
    int *const ptr = &a;
    printf("%d\n", *ptr);

    // pointer to a constant
    // A pointer to a constant is a pointer through which the value of the variable that the pointer points
    // cannot be changed. The address of these pointer can be changed, but the value that
    // the pointer points cannot be changed
    const int *ptr1;
    ptr1 = &b;
    ptr1 = &a; // The new value will be printed since the address can be changed
    // but we can't do *ptr1 = 50;
    printf("%d\n", *ptr1);

    // this is a normal pointer
    p = &a;
    *p = 50;
    printf("%d\n", *ptr);

    // void pointer

    int abc = 100;
    void *voidPointer = NULL;
    voidPointer = &abc;
    printf("%d\n", *(int *)voidPointer);

    return 0;
}