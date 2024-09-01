#include <stdio.h>
struct father
{
    char name[50];
    int age;
    char occupation[100];
};
struct mother
{
    char name[50];
    int age;
    char occupation[100];
};
struct students_info
{
    char name[50];
    int age;
    int gender;
    char location[50];
    struct father f;
    struct mother m;
};

int main()
{
    struct father f1 =
        {
            "YuRen",
            100,
            "Tianhaung"};
    struct mother m1 =
        {
            "placeholder",
            99,
            "Guomu"};

    struct students_info stu =
        {
            "SunXiaochuan",
            12,
            0,
            "Xinjin Town, Sichuan Province.", f1, m1};
    printf("%s", stu.f.name);
    return 0;
}