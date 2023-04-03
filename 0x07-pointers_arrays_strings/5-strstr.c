#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to locate
 *
 * Return: pointer to the beginning of
 * the located substring, or NULL if the
 *         substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *substr;

	while (*haystack != '\0')
	{
		start = haystack;
		substr = needle;

		while (*substr != '\0' && *haystack == *substr)
		{
			haystack++;
			substr++;
		}

		if (*substr == '\0')
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
