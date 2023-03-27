#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 * Description: Generates random valid
 * passwords for the 101-crackme program.
 * Return: 0 (success)
 */
int main(void)
{
    int i;
    int random_value;
    int password_length = 10;
    unsigned int seed = time(NULL);

    srand(seed);

    for (i = 0; i < password_length; i++)
    {
        random_value = (rand() % 94) + 33; 
        printf("%c", random_value);
    }

    printf("\n");

    return (0);
}
