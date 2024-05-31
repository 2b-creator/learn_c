#include <stdio.h>

int main(void)
{
    int i;
    i = 0;
    int a = i++;
    printf("%d %d\n", i, a);
    
    i = 0;
    int b = ++i;
    printf("%d %d\n", i, b);
    return 0;
}