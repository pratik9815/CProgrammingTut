#include <stdio.h>

int main()
{
    int a = 5, b = 6;
    // 101 & 110 = 100
    printf("The output of of Bitwise AND operator a & b is %d\n", a & b);

    int c = 10, d = 15;
    // 1010 | 1111 = 1111
    printf("The output of of Bitwise OR operator c | d is %d\n", c | d);

    // ~ is completement operator
    // ^ is bitwise exclusive or operator
    // <<  left shift operator
    // >> right shift operator

    int e = 10;
    // 1010 << 2 = 101000 // 40
    printf("The output of left shift operator is %d\n", e << 2);
    int f = 10;
    // 1010 >> 1 = 0101 // 5
    printf("The output of right shift operator is %d\n", f >> 4);

    return 0;
}