#include <stdio.h>
// command line argument
// The arguments passed from command line are called are called command line argument.
// Here the argc counts the number of arguments. It counts the file name as first argument.
// The argv[] contains the total number of arguments. The first argument is the file name always

int main(int argc, int *argv[])
{
    printf("Program name is: %s\n", argv[0]);
    if (argc < 2)
    {
        printf("No argument passed through command line.\n");
    }
    else
    {
        printf("First argument is: %s\n", argv[1]);
    }
}
// execute this like ./cla hello