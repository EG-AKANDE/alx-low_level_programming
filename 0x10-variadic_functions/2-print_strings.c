#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: Separator
 * @n: str count
 * @...: var args
 *
 * Return: nil if NULL str and new line
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int a;
	char *str;

	va_start(args, n);

	for (a = 0; a < n; a++)
{
	str = va_arg(args, char *);
	if (!str)
	str = "(nil)";
	if (a < n - 1 && separator)
	printf("%s%s", str, separator);
	else
	printf("%s", str);
}

	printf("\n");
	va_end(args);
}
