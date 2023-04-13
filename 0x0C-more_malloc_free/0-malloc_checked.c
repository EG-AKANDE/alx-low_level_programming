#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates mem with malloc
 *
 * @b: bytes num for allocation
 *
 * Return: Pntr to allocated mem,
 * upon malloc fail, malloc_checked terminates process, status value 98
 */

void *malloc_checked(unsigned int b)

{
	void *q;

	q = malloc(b);

	if (q == NULL)
	exit(98);

	return (q);
}
