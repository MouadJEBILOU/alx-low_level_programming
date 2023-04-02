#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci
 * numbers starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, fib;

	printf("%lu, %lu", fib1, fib2);
	for (i = 0; i < 48; i++)
	{
		fib = fib1 + fib2;
		printf(", %lu", fib);
		fib1 = fib2;
		fib2 = fib;
	}
	printf("\n");

	return (0);
}
