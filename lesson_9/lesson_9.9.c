#include <stdio.h>

typedef struct students_info StuInfo;

struct students_info
{
    char name[50];
    int age;
    int gender;
    char location[50];
};

int main()
{
    StuInfo stu =
        {
            "SunXiaochuan",
            12,
            0,
            "Xinjin Town, Sichuan Province."};
    printf("%s", stu.location);
    return 0;
}