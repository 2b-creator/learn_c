#include <stdio.h>

int main(void)
{
    int day = 2;
    switch (day)
    {
    case 1:
        printf("Monday\n");
    case 2:
        printf("Tuesday\n");
    case 3:
        printf("Wednesday\n");
    case 4:
        printf("Thursday\n");
    case 5:
        printf("Friday\n");
    case 6:
        printf("Saturday\n");
    case 7:
        printf("Sunday\n");
    default:
        break;
    }
    return 0;
}