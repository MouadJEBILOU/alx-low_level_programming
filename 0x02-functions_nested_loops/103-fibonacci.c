#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 1, num2 = 2, next = 0;
	int sum = 2;

	while (next < 4000000)
	{
		next = num1 + num2;
		num1 = num2;
		num2 = next;

		if (next % 2 == 0)
		{
			sum += next;
		}
	}

	printf("%d\n", sum);

	return (0);
}
