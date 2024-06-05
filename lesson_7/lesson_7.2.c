#include <stdio.h>

int main(void)
{
    int a = 200;
    int *p;

    p = &a;

    int b = *p;
    printf("%d", b);
    return 0;
}