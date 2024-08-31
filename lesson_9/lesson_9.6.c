#include <stdio.h>
#include <string.h>

int main()
{
    char *str_1 = "I'm a string";
    const int len = strlen(str_1);
    char str_2[len + 1];

    memcpy(str_2, str_1, len + 1);

    printf("%s\n", str_2);

    char *str_3 = "I am a string";

    if (!strcmp(str_1,str_3))
    {
        printf("same!");
    }
    else
    {
        printf("different!");
    }
    
    return 0;
}