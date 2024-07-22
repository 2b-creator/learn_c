#include <stdio.h>

int leap_year(unsigned year);

int main(void)
{
    unsigned year = 1996;
    printf("%d is %s year", year, leap_year(year) ? "leap" : "lunar");
    return 0;
}

int leap_year(unsigned year)
{
    return !(year % 4) && ((year % 100) || (year % 400));
}