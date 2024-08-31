#include <stdio.h>
void arr_operate(int arr[static 2]);
void arr_operate(int arr[static 2])
{
    int tmp = arr[0];
    arr[0] = arr[1];
    arr[1] = tmp;
}

int main()
{
    int a[2] = {3, 4};
    arr_operate(a);
    printf("%d %d", a[0], a[1]);
    return 0;
}