#include <stdio.h>

void chars();
void arr_init();
void chars();
void ints();

int main(void)
{
    int arr[10] = {143, 564, 298, 346};
    int c = arr[2];
    int d = arr[7];
    printf("%d %d\n", c, d);
    arr_init();
    chars();
    ints();
    return 0;
}

void arr_init()
{
    float flt[5] = {
        [0] = 6.5,
        [1] = 9.4,
        [4] = 3.4e5,
        [3] = 2.6e-2,
    };
    printf("%f %f\n", flt[2], flt[3]);
}

void chars()
{
    char chrs[10] = "hello";
    printf("%c\n", chrs[1]);
}

void ints()
{
    int no_init[50];
    no_init[3] = 6;
    printf("%d", no_init[3]);
}
