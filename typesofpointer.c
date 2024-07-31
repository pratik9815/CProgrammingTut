// wild pointer: only declaring the pointer like int *p; and not assigining any value
// null pointer: a null pointer is that pointer that does not points to any memory location: int *ptr = NULL OR *ptr = 0
// void pointer: it is a pointer that can point to any data type but cannot be dereferenced directly. It is often used
// in generic data handling.
// eg: void *ptr;
//  int num = 10;
#include <stdio.h>
int main()
{

    void *ptr;
    int a = 10;
    ptr = &a;
    printf("%d", *(int *)ptr);
    return 0;
}