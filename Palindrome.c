#include <stdio.h>

int main()
{
    int num, sum = 0, rem;
    printf("Enter the number you want to check for palindrome.\n");
    scanf("%d", &num);
    int temp = num;

    while (num > 0)
    {
        rem = num % 10;         // 100 / 10 = 0// 10 / 10 = 0 // 1 / 10
        sum = (sum * 10) + rem; // 0 // 0 // 1
        num = num / 10;         // 10 // 1 // 0
    }
    if (sum == temp)
    {
        printf("The number is palindrome number.");
    }
    else
    {
        printf("The number is not a palindrome number.");
    }
    return 0;
}