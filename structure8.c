#include <stdio.h>

struct Point
{
    int x, y, z;
};

struct OurNode
{
    char x, y, z;
};

struct MyNode
{
    char x, y, z, w, q;
};

int main()
{
    struct Point p = {10, 20, 30};
    printf("%d %d %d\n", p.x, p.y, p.z);

    struct OurNode n = {'a', 'b', 'c' + 2}; // converts to ascii code

    struct OurNode *ptr = &n;

    printf("%c %c %c\n", (*ptr).x, (*ptr).y, (*ptr).z);

    printf("%c %c\n", *((char *)ptr + 1), *((char *)ptr + 2)); // second and third value printed

    printf("%c\n", *((char *)ptr)); // since we did not give what type of data we want to print it prints both the b and e since
                                    //  1 is an int of size 4
    struct MyNode n3 = {'a', 'b', 'c' + 2, 'd', 'e' + 2};
    struct MyNode *ptr2 = &n3;
    printf("%c\n", *((char *)ptr2 + 3));
    return 0;
}

// struct node *ptr[10] means an array , each element of which is a pointer to structure of type node