#include "main.h"

/**
 * is_separator - Checks if the character is a separator
 * @c: The character to be checked
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i;

    for (i = 0; separators[i] != '\0'; i++)
    {
        if (c == separators[i])
        {
            return 1;
        }
    }

    return 0;
}

/**
 * cap_string - Capitalizes all words of a string
 * @s: Pointer to the input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        /* Check if the current character is a lowercase letter */
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            /* If it's the first character or preceded by a separator, capitalize it */
            if (i == 0 || is_separator(s[i - 1]))
            {
                s[i] = s[i] - ('a' - 'A');
            }
        }
    }

    return s;
}
