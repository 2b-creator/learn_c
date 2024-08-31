#include <stdio.h>

int main()
{
    int arr[1145];
    arr[0] = 10;
    int c = sizeof(arr) / sizeof(arr[0]);
    printf("%d", c);
    return 0;
}