#include <stdio.h>

// using recursion
void printFib(int n, int prev1, int prev2)
{
    if (n < 3)
    {
        return;
    }
    int curr = prev1 + prev2;
    prev1 = prev2;
    prev2 = curr;
    printf(" %d ", curr);
    return printFib(n - 1, prev1, prev2);
}

int main(int argc, int *argv[])
{
    int n;
    printf("Enter the numbers of item in fibonacci series.\n");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Invaid number of terms. \n");
    }
    else if (n == 1)
    {
        printf("%d", 0);
    }
    else if (n == 2)
    {
        printf("%d %d", 0, 1);
    }
    else
    {
        printf("%d %d", 0, 1);
        printFib(n, 0, 1);
    }

    return 0;
}