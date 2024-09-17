#include <stdio.h>

int main()
{
    int n, original, remainder, result = 0, count = 0;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Store the original number for comparison later
    original = n;

    // Calculate the number of digits (count)
    int temp = n;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    temp = n;
    while (temp != 0)
    {
        remainder = temp % 10;

        int product = 1;
        for (int i = 0; i < count; i++)
        {
            product *= remainder; // Multiply remainder by itself count times
        }

        result += product; // Add to result
        temp /= 10;
    }

    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
