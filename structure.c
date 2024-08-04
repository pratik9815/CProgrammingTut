#include <stdio.h>

struct
{
    char *Name;
    char *Engine;
    int fule_tank_cap;
    int seating_cap;
    float city_mileage;
} car1, car2;

int main()
{
    car1.Engine = "V8";
    car1.fule_tank_cap = 60;
    car1.city_mileage = 15.5;
    car1.seating_cap = 5;
    car1.Name = "BMW";
    printf("%s\n", car1.Name);
    car2.Engine = "V12";
    car2.fule_tank_cap = 80;
    car2.city_mileage = 13.5;
    car2.seating_cap = 4;
    car2.Name = "Ferrari";
    car2.Engine = "V8";
    printf("%s\n", car2.Name);
    return 0;
}