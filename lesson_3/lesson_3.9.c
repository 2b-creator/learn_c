#include <stdio.h>

int main(void)
{
    unsigned int a = 4294967295;
    printf("%u %u", a, a + 1);
    return 0;
}