#include "function_pointers.h"

/**
 * int_index - search for int
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to be used to compare values
 *
 * Return: index of first element for which cmp does not return 0,
 *         -1 for no element match or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (array && cmp)
{
	for (i = 0; i < size; i++)
{
	if (cmp(array[i]))
{
	return (i);
}
}
}

	return (-1);
}
