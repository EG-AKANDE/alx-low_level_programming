#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: Size, in bytes, of the allocated space for ptr
 * @new_size: New size, in bytes, of the new memory block
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	void *new_pntr;
	unsigned int q;

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
{
	new_pntr = malloc(new_size);
	if (new_pntr == NULL)
	return (NULL);
	return (new_pntr);
}

	if (new_size == 0)
{
	free(ptr);
	return (NULL);
}

	new_pntr = malloc(new_size);
	if (new_pntr == NULL)
	return (NULL);

	if (new_size > old_size)
{
	for (q = 0; q < old_size; q++)
	*((char *)new_pntr + q) = *((char *)ptr + q);
}
	else
{
	for (q = 0; q < new_size; q++)
	*((char *)new_pntr + q) = *((char *)ptr + q);
}

	free(ptr);
	return (new_pntr);
}
