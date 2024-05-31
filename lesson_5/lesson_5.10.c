#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 30; i++)
    {
        printf("%d ", i);
        if (i == 15)
        {
            break;
        }
    }
    return 0;
}