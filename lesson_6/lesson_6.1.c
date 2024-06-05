#include <stdio.h>

int main(void)
{
    int c = 3;
    if (c > 4 && c++)
    {
        printf("yes\n");
    }
    printf("%d", c);

    return 0;
}