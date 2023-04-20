#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a given printing function
 *
 * @name: The name to be printed
 * @f: A pointer to the printing function to be used
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
