#include <stdio.h>
void arr_op_addr(int *arr);
void arr_op_addr(int *arr)
{
    int tmp = arr[0];
    arr[0] = arr[1];
    arr[1] = tmp;
}

int main()
{
    int arr[2] = {3, 4};
    arr_op_addr(arr);
    printf("%d %d", arr[0], arr[1]);
    return 0;
}