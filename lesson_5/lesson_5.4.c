#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 10;
    if (a > b)
    {
        int c = a - b;
        printf("a:%d - b:%d = c:%d", a, b, c);
    }
    
    return 0;
}