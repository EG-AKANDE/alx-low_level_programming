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

	if (str == NULL)
	printf("%s(nil)", separator == NULL ? "" : separator);
	else
	printf("%s%s", str, a == n - 1 ? "" : (separator == NULL ? "" : separator));
}
	printf("\n");
	va_end(args);
}
