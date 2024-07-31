#include <stdio.h>

int main()
{

    int myNumbers[] = {10, 20, 30, 40, 50};
    // determine the size of the array in bytes using sizeof
    printf("%lu is the size in bytes of the array\n ", sizeof(myNumbers));
    // to determine the length we can do this
    int length = sizeof(myNumbers) / sizeof(int);
    printf("%d is the length of the array\n", length);

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", myNumbers[i]);
    }
    return 0;
}