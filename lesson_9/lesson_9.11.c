#include <stdio.h>

struct students
{
    char name[20];
    int age;
};

int main()
{
    struct students stu1 = {
        "LaoBa",
        23};
    struct students *p;
    p = &stu1;
    printf("%d\n", (*p).age);
    printf("%d", p->age);
    return 0;
}