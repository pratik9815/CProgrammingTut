#include <stdio.h>
// union is a user defined data type but unlike structures, union members share same memory location
// member will share same memory location so if we make changes in one member then it will be reflected in other member
// as well

union abc
{
    int a;
    char b;
};

int main()
{
    union abc u;
    printf("%d\n", &u.a);
    printf("%d\n", &u.b);
    printf("%d\n", sizeof(u));

    u.a = 40;
    printf("%d\n", u.a);
    printf("%c\n", u.b);
    return 0;
}