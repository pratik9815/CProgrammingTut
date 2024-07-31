#include <stdio.h>

int main()
{
    int a = 5;
    int *p;
    p = &a;
    printf("%d\n", *p); // *p has value 5

    int arr[] = {10, 20, 30, 40};
    int *ptr;
    ptr = arr;
    printf("%d\n", *arr + 1); // *arr has value 10 and value 1 is added

    // This acts as a const pointer
    char strintcharacter[] = "Pratik";
    printf("%s\n", strintcharacter);

    // Whereas this acts as a pointer to a constant
    char *string = "Pratik";

    printf("%s\n", string);
    printf("%s\n", string + 1);

    char *str[] = {
        "Hello",
        "World",
        "I",
        "am",
        "Pratik",
        "Chamlagain"};

    printf("%s\n", *str);
    printf("%s\n", *str + 1);

    for (int i = 0; i < 6; i++)
    {
        printf("%s\t", str[i]);
    }

    return 0;
}