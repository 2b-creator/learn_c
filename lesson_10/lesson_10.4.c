#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *add(const char *strs);

char *add(const char *strs)
{
    char new_str[100];
    const char *notes = "!!!";
    strcpy(new_str, strs);
    strcat(new_str, notes);
    char *new_str_malloc = (char *)malloc(sizeof(new_str));
    strcpy(new_str_malloc, new_str);
    return new_str_malloc;
}

int main()
{
    const char *str = "I love C";
    char *operate_str = add(str);
    printf("%s", operate_str);
    free(operate_str);
    return 0;
}