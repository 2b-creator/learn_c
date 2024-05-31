#include <stdio.h>

int main(void)
{
    int a = 17;
    int is_prime = 1;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            is_prime = 0;
            break;
        }
    }
    if (is_prime)
    {
        printf("%d is a prime.", a);
    }
    else
    {
        printf("%d is not a prime", a);
    }

    return 0;
}