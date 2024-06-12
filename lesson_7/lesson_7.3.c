#include <stdio.h>

int main(void)
{
    int arr[] = {1, 3, 5, 7};
    int d = *arr;
    int e = *(arr + 2);
    printf("%d, %d", d, e);
    return 0;
}