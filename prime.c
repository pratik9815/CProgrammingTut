#include <stdio.h>

int main()
{
    int num, i, temp;
    printf("Enter the number you want to check for prime?\n");
    scanf("%d", &num);
    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            temp++;
        }
    }
    if (temp == 0)
    {
        printf("The number %d is prime.\n", num);
    }
    else
    {
        printf("The number %d is not prime.\n", num);
    }
    return 0;
}