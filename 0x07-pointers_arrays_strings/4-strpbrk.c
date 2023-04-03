#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search in
 * @accept: the set of bytes to search for
 *
 * Return: pointer to the byte in s that
 * matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *accept_iter;

	while (*s)
	{
		for (accept_iter = accept; *accept_iter; accept_iter++)
		{
			if (*s == *accept_iter)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
