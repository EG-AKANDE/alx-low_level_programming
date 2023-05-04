#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: str 0 plus 1 character
 *
 * Return: converted num, 0 for non-valid
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int fig = 0;

	if (!b)
	return (0);

	while (*b)
{
	if (*b != '0' && *b != '1')
	return (0);

	fig <<= 1;
	fig += *b - '0';
	b++;
}

	return (fig);
}
