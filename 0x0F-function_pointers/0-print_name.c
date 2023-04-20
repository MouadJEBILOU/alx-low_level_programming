#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer to print name a certain way
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
