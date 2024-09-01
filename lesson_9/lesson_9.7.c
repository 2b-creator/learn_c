#include <stdio.h>

struct students_info
{
    char name[50];
    int age;
    int gender;
    char location[50];
};

int main()
{
    struct students_info stu =
        {
            "SunXiaochuan",
            12,
            0,
            "Xinjin Town, Sichuan Province."};
    printf("%s", stu.location);
    return 0;
}