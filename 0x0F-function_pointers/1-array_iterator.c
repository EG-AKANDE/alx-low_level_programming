#include <stddef.h>

/**
 * array_iterator - executes a func given as a param on each elmnt of array
 * @array: pntr to array
 * @size: array size
 * @action: func to apply
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	if (array && action)
{
	for (i = 0; i < size; i++)
{
	action(array[i]);
}
}
}
