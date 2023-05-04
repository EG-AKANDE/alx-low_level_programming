#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: int number
 * @index: index
 *
 * Return: value of bit at index, -1 for error
 */

int get_bit(unsigned long int n, unsigned int index)

{
	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);

	return ((n >> index) & 1);
}
