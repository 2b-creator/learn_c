#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int c = 10;
    int d = 20;
    int a = add(c, d);
    printf("%d", a);
    return 0;
}

int add(int a, int b)
{
    return a + b;
}