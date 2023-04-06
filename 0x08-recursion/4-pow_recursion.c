#include "main.h"

/**
 * _pow_recursion - value x to power y
 * @x: base int
 * @y: exponent int
 *
 * Return: result, -1 if negative y
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
	return (-1);
	else if (y == 0)
	return (1);
	else if (y == 1)
	return (x);
	else
	return (x * _pow_recursion(x, y - 1));
}
