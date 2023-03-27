#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, len = 8;
    char password[9];

    srand(time(NULL));

    for (i = 0; i < len; i++)
    {
        password[i] = rand() % 94 + 32;
    }

    password[i] = '\0';

    printf("%s\n", password);

    return (0);
}
