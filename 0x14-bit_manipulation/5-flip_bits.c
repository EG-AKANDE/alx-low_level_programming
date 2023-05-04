#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * @n: int number
 * @m: int
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int the_result = n ^ m;
	unsigned int together = 0;

	while (the_result)
{
	together += the_result & 1;
	the_result >>= 1;
}

	return (together);
}
