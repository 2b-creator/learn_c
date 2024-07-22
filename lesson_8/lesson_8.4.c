#include <stdio.h>
void story();

int main()
{
    story();
    return 0;
}

void story()
{
    printf("Once upon a time, ");
    printf("there was a mountain.");
    printf(" In the mountain there was a temple.");
    printf(" In the temple there was an old monk who was telling a story to a young monk.");
    printf(" What was the story? ");
    story();
}