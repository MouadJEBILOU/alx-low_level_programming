TASK 0 : Write a function that concatenates two strings :
--> Prototype: char *_strcat(char *dest, char *src);
--> This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
--> Returns a pointer to the resulting string dest
#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i;

    /* Find the length of the destination string */
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    /* Append the source string to the destination string */
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    /* Add the terminating null byte */
    dest[dest_len + i] = '\0';

    return dest;
}

TASK 1 : Write a function that concatenates two string :
--> Prototype: char *_strncat(char *dest, char *src, int n);
--> The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
--> Return a pointer to the resulting string dest
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

    // Find the length of the destination string
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    // Append the source string to the destination string, using at most n bytes
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    // Add the terminating null byte
    dest[dest_len + i] = '\0';

    return dest;
}

TASK 2 : Write a function that copies a string.
--> Prototype: char *_strncpy(char *dest, char *src, int n);
--> Your function should work exactly like strncpy
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

TASK 3 : Write a function that compares two strings.
--> Prototype: int _strcmp(char *s1, char *s2);
--> Your function should work exactly like strcmp
#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    /* Compare the strings */
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }

    return (s1[i] - s2[i]);
}