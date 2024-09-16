#include <stdio.h>
#include <conio.h>

void printCharacters(char name[])
{
    printf("This is the calling function printCharacter %s\n", name);
}
// if we want to do same using pointers then we should do
void printCharacterUsingPointer(char *name)
{
    printf("This is the calling function printCharacterUsingPointer %s\n", name);
}

int main()
{
    // for int type
    int a = 5;
    int *ptr = &a;

    printf("This is the address of a %d\n", ptr);
    printf("This is the value of a %d\n", *ptr);

    // for character type , this is character arrays
    char charValues[] = "Pratik";
    printf("The char value is %s\n", charValues);
    printCharacters(charValues);
    // what if we want to send this array value to the other functions, in that case it is recommended to use pointers

    char *name = "Pratik";
    printf("This is the string of characters %c\n", *(name + 0));
    printf("This is the string of characters %s\n", name);
    printCharacterUsingPointer(name); // while passing arrays it does not matter what we send the pointer or
    // the array value since both of them store the address of first element in array

    //  for the array of type integer
    int arr[] = {10, 20, 30, 40};
    int *arrPtr = arr;

    printf("The first element of array is %d\n", arr[0]);                     // we can loop through the arr to print all the array
    printf("The second value of array using pointer is %d\n", *(arrPtr + 1)); // we can loop through all the arr
    printf("The first value of array using pointer is %d\n", arrPtr[0]);
    getch();
    return 0;
}