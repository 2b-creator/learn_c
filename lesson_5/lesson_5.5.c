#include <stdio.h>

int main(void)
{
    int a = 20;
    int b = 20;
    if (a == b)
    {
        printf("a is equal to b\n");
    }
    if (a != b)
    {
        printf("a is not equal to b\n");
    }

    b = 30;
    if (a == b)
    {
        printf("a is equal to b\n");
    }
    if (a != b)
    {
        printf("a is not equal to b\n");
    }

    return 0;
}