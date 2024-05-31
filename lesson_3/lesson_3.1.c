#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int sum = 0;
    sum = add(3, 4);
    printf("%d", sum);
    return 0;
}

int add(int a, int b)
{
    int c = 0;
    c = a + b;
    return c;
}