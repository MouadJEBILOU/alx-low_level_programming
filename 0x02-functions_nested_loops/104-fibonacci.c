#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned int i, a = 1, b = 2, c;

    printf("%u, %u", a, b);

    for (i = 0; i < 96; i++)
    {
        c = a + b;
        printf(", %u", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
