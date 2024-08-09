#include <stdio.h>
// structure packing
// we can avoid the wastage of memory by simply writing #pagma pack(1)
// #pragma is a special purpose directive used to turn some feature on and off
#pragma pack(1)
struct abc
{
    char a;
    int b;
    char x;
};
int main()
{
    struct abc s;
    printf("%d\n", sizeof(s));
    return 0;
}

// if we want to waste the cpu cycle packing concept is used and if we want to waste the memory padding is used