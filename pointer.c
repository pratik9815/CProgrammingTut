#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 50;
    int *ptr = &a;        // pointer variable * dereferencing, & referencing operator
    printf("%d\n", a);    // value
    printf("%u\n", &a);   // address
    printf("%d\n", ptr);  // address
    printf("%d\n", *ptr); // value
    printf("%u\n", &ptr); // address
    return 0;
}