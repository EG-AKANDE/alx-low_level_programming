#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed
 * Return: nil if str is NULL
 */

void print_all(const char * const format, ...)

{
	va_list args;
	int a = 0, b = 0;
	char *str;

	va_start(args, format);

	while (format && format[a])
{
	b = 1;
	switch (format[a])
{
	case 'c':
	printf("%c", va_arg(args, int));
	break;
	case 'i':
	printf("%d", va_arg(args, int));
	break;
	case 'f':
	printf("%f", va_arg(args, double));
	break;
	case 's':
	str = va_arg(args, char *);
	if (str == NULL)
	str = "(nil)";
	printf("%s", str);
	break;
	default:
	b = 0;
	break;
}
	if (format[a + 1] && b)
	printf(", ");

	a++;
}

	va_end(args);
	printf("\n");
}
