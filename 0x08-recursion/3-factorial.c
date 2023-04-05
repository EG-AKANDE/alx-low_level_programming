#include "main.h"

/**
 * factorial - factorial of number
 * @n: number we find factorial for
 *
 * Return: factorial n, or -1 if negative n
 */

int factorial(int n)

{
	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);

	return (n * factorial(n - 1));
}
