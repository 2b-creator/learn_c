#include <stdio.h>

int main(void)
{
    char *name[] = {"SunXiaochuan", "LiSi", "Zhangsan"};
    printf("%s %s %s", name[0], name[2], name[1]);
    return 0;
}