#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to use from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i;

    /* Find the length of the destination string */
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    /* Append the source string to the destination string, using at most n bytes */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    /* Add the terminating null byte */
    dest[dest_len + i] = '\0';

    return dest;
}
