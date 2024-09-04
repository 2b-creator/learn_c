#include <stdio.h>

typedef struct students Stu;

struct students
{
    char name[20];
    int age;
};

int main()
{
    Stu stu1 = {
        "LaoBa",
        23};
    Stu *p;
    p = &stu1;
    printf("%d\n", (*p).age);
    printf("%d", p->age);
    return 0;
}