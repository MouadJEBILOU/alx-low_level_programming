#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table to print
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (j == 0)
					_putchar('0');
				else
				{
					_putchar(j != n && product < 100 ? ' ' : '\0');
					_putchar(product < 10 ? ' ' : (product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
