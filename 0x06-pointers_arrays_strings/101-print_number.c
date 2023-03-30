#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
    unsigned int num;

    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10)
    {
        print_number(num / 10);
    }

    _putchar((num % 10) + '0');
}
