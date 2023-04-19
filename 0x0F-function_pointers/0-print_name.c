#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: the name
 * @f: function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))

{
	if (name != NULL && f != NULL)
	f(name);
}
