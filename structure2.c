#include <stdio.h>

// typedef is used to create our own type of data type suppose we have int type as default we can define
// int type as our own type of data type like say integer

typedef int Integer;

typedef struct Student
{
    char *Name;
    int Roll;
    int Age;
    float Percentage;
} student;

int main()
{
    Integer a = 10;
    printf("%d\n", a);
    student s1;
    s1.Age = 23;
    printf("%d\n", s1.Age);
    return 0;
}