#include <stdio.h>

int B_say(void);
void C_say(void);

int main(void)
{
    printf("A: Hello sir!\n");
    B_say();
    C_say();
    return 0;
}

int B_say(void)
{
    printf("B: Hello, good afternoon!\n");
    return 0;
}

void C_say(void)
{
    printf("C: Are you OK?\n");
}