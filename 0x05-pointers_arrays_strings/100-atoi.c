#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string,
 * or 0 if no number is found
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int started_parsing = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
        {
            if (result > (INT_MAX - (*s - '0')) / 10)
            {
                if (sign > 0)
                    return INT_MAX;
                else
                    return INT_MIN;
            }

            result = result * 10 + (*s - '0');
            started_parsing = 1;
        }
        else if (started_parsing)
            break;
        
        s++;
    }

    return result * sign;
}
