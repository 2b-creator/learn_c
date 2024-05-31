#include <stdio.h>

void add();
int c = 10;

int main(void)
{
    add();
    return 0;
}

void add()
{
    printf("%d", c);
}