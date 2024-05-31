#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", j);
            if (j == 5)
            {
                break;
            }
        }
        printf("\n");
    }

    return 0;
}