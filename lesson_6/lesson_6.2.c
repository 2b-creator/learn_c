#include <stdio.h>

int main(void)
{
    int x, y = 10;
    x = (y < 10) ? 30 : 40;
    printf("%d", x);
}