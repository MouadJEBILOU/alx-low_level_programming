#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int prev1 = 1, prev2 = 2, next, count = 2; /* On commence avec 1 et 2 */
    printf("%d, %d, ", prev1, prev2);

    while (count < 98)
    { /* On veut les 98 premiers nombres de Fibonacci */
        next = prev1 + prev2;
        prev1 = prev2;
        prev2 = next;
        count++;
        printf("%d", next);
        if (count < 98)
        {
            printf(", "); /* On met une virgule sauf pour le dernier nombre */
        }
    }
    printf("\n");
    return 0;
}
