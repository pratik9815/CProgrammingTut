#include <stdio.h>
int main()
{
    int num;
    int i = 0;
    printf("Enter the number whose table you want to print...\n");
    scanf("%d", &num);
table:
    printf("%d * %d = %d\n", num, i, num * i);
    i++;
    if (i <= 10)
        goto table;
    return 0;
}