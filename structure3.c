#include <stdio.h>

typedef struct Car
{
    char *Name;
    int Capacity;
    float Mileage;
} car;
int main()
{
    car c1 = {"Swift", 5, 10.5};
    car c2 = {"BYD", 10, 20.5};

    printf("%s\n", c1.Name);
    printf("%s\n", c2.Name);

    printf("%d\n", c1.Capacity);
    printf("%d\n", c2.Capacity);

    car c3 = {.Capacity = 5, .Name = "BMW", .Mileage = 15.5};
    printf("%s\n", c3.Name);

    return 0;
}