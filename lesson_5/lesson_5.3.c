#include <stdio.h>

int main(void)
{
    int a = 15;
    int b = 20;
    if (a > b)
    {
        printf("a:%d > b:%d", a, b);
    }
    else
    {
        printf("a:%d <= b:%d", a, b);
    }

    return 0;
}