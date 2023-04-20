#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints nums, then new line
 *
 * @separator: str to print btw nums
 * @n: int count to function
 *
 * Return: void, if separator is NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int a;
	int num;

	va_start(args, n);

	for (a = 0; a < n; a++)
{
	num = va_arg(args, int);
	printf("%d", num);
	if (separator != NULL && a < n - 1)
	printf("%s", separator);
}
	printf("\n");

	va_end(args);
}
