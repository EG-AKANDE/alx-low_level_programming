#include "main.h"

/**
 * check_prime - check for prime using number
 * @n: to check this number
 * @div: divisor
 * Return: 1 if its prime, 0 if its not prime
 */

int check_prime(int n, int div)

{
	if (n % div == 0)
	return (0);

	if (div > n / 2)
	return (1);

	return (check_prime(n, div + 1));
}

/**
 * is_prime_number - to check if certain num is prime
 * @n: to check this number
 * Return: 1 if its prime, 0 if its not prime
 */

int is_prime_number(int n)

{
	if (n <= 1)
	return (0);

	return (check_prime(n, 2));
}
