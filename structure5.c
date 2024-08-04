#include <stdio.h>

struct Student
{
    int x;
    int y;
};

int main()
{
    struct Student s = {5, 10};
    struct Student *p = &s;

    printf("%d %d\n", p->x, p->y);
    printf("%d %d\n", (*p).x, (*p).y);

    return 0;
}