#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int sum = 0, first = 1, second = 2, next;

	while (second < 4000000)
	{
		next = first + second;
		first = second;
		second = next;
		if (second % 2 == 0)
		{
			sum += second;
		}
	}

	printf("%ld\n", sum);

	return (0);
}
