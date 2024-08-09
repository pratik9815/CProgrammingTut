#include <stdio.h>

int main()
{
    // implicit casting
    int a = 10;
    float b = 10.5;
    char c = 'a';
    printf("%f\n", a + b); // here the a is converted to float and added with b
    printf("%d\n", a + c); // here the c is converted to int and added with a
    // Explicit casting

    float num1 = 5.5;
    int num2 = (int)num1; // num1 is casted as int and stored in num2

    return 0;
}