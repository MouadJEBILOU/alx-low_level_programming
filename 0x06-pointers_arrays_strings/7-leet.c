#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: Pointer to the input string
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *s)
{
    int i, j;
    char normal[] = "aeotlAEOTL";
    char leet[] = "4307143071";

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; normal[j] != '\0'; j++)
        {
            if (s[i] == normal[j])
            {
                s[i] = leet[j];
                break;
            }
        }
    }

    return (s);
}
