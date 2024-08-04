#include <stdio.h>
int main()
{
    int value = 5;
    void *ptr;
    ptr = &value;
    printf("%d\n", *(int *)ptr);
    char string[] = "Pratik";
    ptr = string;
    printf("%s\n", (char *)ptr);
    return 0;
}