#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password that satisfies the 101-crackme program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, total_sum, random_char;
    char password[100];

    srand(time(NULL));
    total_sum = 0;

    for (i = 0; i < 99; i++)
    {
        random_char = rand() % 78 + 33;
        password[i] = random_char;
        total_sum += random_char;

        if (total_sum >= 2772)
        {
            password[i] = 2772 - (total_sum - random_char);
            password[i + 1] = '\0';
            break;
        }
    }

    printf("%s\n", password);

    return (0);
}
