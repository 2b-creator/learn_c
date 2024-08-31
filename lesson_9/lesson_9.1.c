#include <stdio.h>

int main()
{
    int a[3][4] = {{1, 2, 3}, {2, 4, 6}, {3, 6, 9}, {4, 8, 12}};
    
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", a[0][i]);
    }

    return 0;
}
