#include <stdio.h>
// structure padding
struct abc
{
    char a;
    char b;
    int x;
};
struct cde
{
    char a;
    int x;
    char b;
};
int main()
{
    struct abc s;
    printf("%d\n", sizeof(s));

    struct cde c1;
    printf("%d\n", sizeof(c1));
    return 0;
}