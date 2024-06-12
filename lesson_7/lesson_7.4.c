#include <stdio.h>

void func_addr(int *addr);
void func_value(int n);

void func_addr(int *addr)
{
    *addr = *addr + 1;
    printf("%d\n", *addr);
}

void func_value(int n)
{
    n = n + 1;
    printf("%d\n", n);
}

int main(void)
{
    int a = 3;
    int b = 7;

    func_addr(&a);
    func_value(b);
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}