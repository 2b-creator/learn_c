#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num_addr;
    num_addr = (int *)malloc(sizeof(int) * 2); // 动态申请内存，大小为 int 类型的两倍，表示能存入 2 个 int 类型的数据
    num_addr[1] = 24;                          // 这一行代表了 num_addr 的下一位内存空间的位置存放 24
    printf("%d", *(num_addr + 1));
    free(num_addr); // 不要忘记释放内存，这是个好习惯
    return 0;
}