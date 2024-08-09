#include <stdio.h>

int main()
{
    // The switch expression must be of integer or character type
    char operator;
    float num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    switch (operator)
    {
    case '+':
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        break;
    default:
        printf("Error! operator is not correct");
    }
    return 0;
}