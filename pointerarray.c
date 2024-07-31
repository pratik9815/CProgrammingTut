#include <stdio.h>
int main()
{
    // x[0] x[1] x[2] x[3] x[4]
    // 1     2    3    4    5
    int x[5] = {1, 2, 3, 4, 5};
    int *ptr = &x[0];

    printf("%d\n", *ptr);       // first element
    printf("%d\n", *(ptr + 1)); // second element *(ptr + 1 * 4)
    printf("%d\n", *(ptr + 4)); // second element *(ptr + 4 * 4)
    printf("%d\n", x[0]);
    printf("%d\n", ptr);

    printf("%d\n", *ptr++); // post increment
    printf("%d\n", ++*ptr); // pre increment // right to left
    printf("%d\n", ptr++);  // post increment
    printf("%d\n", ++ptr);  // pre increment

    return 0;
}