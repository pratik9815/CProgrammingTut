#include <stdio.h>
struct Student
{
    char *Name;
    int Roll;
    int Age;
    float Percentage;
};
int main()
{
    struct Student s1;
    s1.Name = "Pratik";
    s1.Roll = 25;
    s1.Age = 22;
    s1.Percentage = 90.5;
    printf("Name: %s\nRoll: %d\nAge: %d\nPercentage: %f\n", s1.Name, s1.Roll, s1.Age, s1.Percentage);
    return 0;
}