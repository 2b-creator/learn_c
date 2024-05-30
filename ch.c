#include <stdio.h>

int main()
{
    char ch_1 = 66;
    char ch_2 = '\102';
    char ch_3 = '\x42';
    printf("%c %c %c", ch_1, ch_2, ch_3);
    return 0;
}