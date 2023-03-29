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
