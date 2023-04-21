#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_c - prints a character
 * @args: va_list containing the character to print
 */
void print_c(va_list args)
{
    printf("%c", va_arg(args, int));
}

/**
 * print_i - prints an integer
 * @args: va_list containing the integer to print
 */
void print_i(va_list args)
{
    printf("%d", va_arg(args, int));
}

/**
 * print_f - prints a float
 * @args: va_list containing the float to print
 */
void print_f(va_list args)
{
    printf("%f", va_arg(args, double));
}

/**
 * print_s - prints a string
 * @args: va_list containing the string to print
 */
void print_s(va_list args)
{
    char *str = va_arg(args, char *);
    if (str == NULL)
    {
        printf("(nil)");
        return;
    }
    printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0, j = 0;
    char *sep = "";
    print_fn_t funcs[] = {
        {'c', print_c},
        {'i', print_i},
        {'f', print_f},
        {'s', print_s},
        {'\0', NULL}
    };

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;
        while (funcs[j].type)
        {
            if (funcs[j].type == format[i])
            {
                printf("%s", sep);
                funcs[j].fn(args);
                sep = ", ";
                break;
            }
            j++;
        }
        i++;
    }

    printf("\n");

    va_end(args);
}
