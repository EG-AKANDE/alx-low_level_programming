#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * starting with the first character
 *
 * @str: The string to be printed
 */

void puts2(char *str)

{
	int len = 0;
	int i;

	while (*(str + len) != '\0')
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(*(str + i));

	_putchar('\n');
}
