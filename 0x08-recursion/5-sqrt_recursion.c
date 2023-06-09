#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 * @n: number to calculate the square root of
 *
 * Return: natural square root of the number,
 * -1 if n does not have a
 * natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - helper function for calculating the square root
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: natural square root of the number,
 * -1 if n does not have a
 * natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}

	return (sqrt_helper(n, i + 1));
}
