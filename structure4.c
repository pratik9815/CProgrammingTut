#include <stdio.h>

typedef struct Student
{
    char *Name;
    int Roll;
    int Age;
    float Percentage;
} Student;

int main()
{
    Student s1[2];

    s1[0].Name = "Pratik Chamlagain";
    s1[0].Age = 22;
    s1[0].Roll = 25;
    s1[0].Percentage = 90.5;

    s1[1].Name = "Ankit Chamlagain";
    s1[1].Age = 25;
    s1[1].Roll = 1;
    s1[1].Percentage = 95.5;

    for (int i = 0; i < 2; i++)
    {
        printf("Name: %s\nRoll: %d\nAge: %d\nPercentage: %f\n", s1[i].Name, s1[i].Roll, s1[i].Age, s1[i].Percentage);
        printf("\n");
    }
    return 0;
}