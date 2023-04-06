#include "main.h"

/**
 * _sqrt_helper - function to cal square rt
 *
 * @n: num whose square rt to find
 * @guess: present guess of square rt
 *
 * Return: square rt n, -1 if not seen
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	return (guess);
	else if (guess * guess > n)
	return (-1);
	else
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - natural square rt of number
 *
 * @n: no whose square rt to find
 *
 * Return: square rt n, -1 if not seen
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	else
	return (_sqrt_helper(n, 0));
}
