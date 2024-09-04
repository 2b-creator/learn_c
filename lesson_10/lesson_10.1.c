#include <stdio.h>
#include <string.h>

char *add(const char *strs);

char *add(const char *strs)
{
    char new_str[100];
    const char *notes = "!!!";
    strcpy(new_str, strs);
    strcat(new_str, notes);
    return new_str;
}

int main()
{
    const char *str = "I love C";
    char *res = add(str);
    printf("%s", res);
    return 0;
}


