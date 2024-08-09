#include <stdio.h>

int main()
{
    // There are mainly three kinds of loops that are do while loop,
    // while loop,
    // for loop

    // do while loop
    // Here the loop is executed at least one time before checking the condition so it is executed at least one time
    int i = 0;
    do
    {
        printf("This is %d iteration of do while loop\n", i);
        i++;
    } while (i < 5);

    // while loop
    int j = 0;
    while (j < 5)
    {
        printf("This is %d iteration of while loop\n", j);
        j++;
    }
    // for loop, it is the most common type of loop
    for (int k = 0; k < 5; k++)
    {
        printf("This is %d iteration of for loop\n", k);
    }

    // break and continue statement in c
    // break in c is used to break the loop if some condition is met
    // continue is used to skip some lines of code inside the loop and continue with the next iteration

    // example of continue
    // here 5 is not printed and all the other numbers are printed from 0 to 9
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}