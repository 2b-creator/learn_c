#include <stdio.h>

int main(void)
{
    int var = 10;
    int *p;
    p = &var;

    printf("the address of var is: %p\n", p);
    return 0;
}