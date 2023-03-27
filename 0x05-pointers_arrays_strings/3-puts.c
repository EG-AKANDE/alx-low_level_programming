#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: The string to be printed
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
		_putchar(*(str + i++));

	_putchar('\n');
}
