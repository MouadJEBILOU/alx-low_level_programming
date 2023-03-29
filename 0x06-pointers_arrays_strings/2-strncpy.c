#include "main.h"

/**
 * _strncpy - Copies a string, using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to use from src
 *
 * Return: Pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    /* Copy the source string to the destination string, using at most n bytes */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* If the source string is shorter than n bytes, fill the remaining bytes with null characters */
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}
