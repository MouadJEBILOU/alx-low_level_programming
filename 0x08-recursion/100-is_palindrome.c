#include "main.h"

int _strlen(char *s);
int palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - returns 1 if a string
 * is a palindrome and 0 if not
 * @s: string to check for palindrome
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (palindrome_helper(s, 0, len - 1));
}

/**
 * _strlen - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen(s + 1));
}

/**
 * palindrome_helper - helper function for
 * checking if a string is palindrome
 * @s: string to check for palindrome
 * @start: start index
 * @end: end index
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}

	return (palindrome_helper(s, start + 1, end - 1));
}
