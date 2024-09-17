#include <stdio.h>

int factorial(int n)
{
    if (n != 0)
    {
        return n * factorial(n - 1);
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter the number you want to perform factorial operation : \n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("The factorial is not defined");
    }

    else
    {
        int fact = factorial(n);
        printf("The factorial of %d is %d.", n, fact);
    }
    return 0;
}