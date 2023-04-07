#include "main.h"

int prime_helper(int n, int i);

/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: number to check for primality
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_helper(n, 2));
}

/**
 * prime_helper - helper function for checking primality
 * @n: number to check for primality
 * @i: iterator
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}

	return (prime_helper(n, i + 1));
}
