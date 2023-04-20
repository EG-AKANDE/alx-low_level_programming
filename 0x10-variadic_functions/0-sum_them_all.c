#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all its parameters
 * @n: param count
 *
 * Return: params sum, 0 if n==0
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list args;
	int sum = 0;
	unsigned int a;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (a = 0; a < n; a++)
{
	sum += va_arg(args, int);
}

	va_end(args);

	return (sum);
}
