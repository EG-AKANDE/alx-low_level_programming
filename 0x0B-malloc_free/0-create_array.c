#include <stdlib.h>
#include "main.h"

/**
 * create_array - develops char array, init with particular char
 * @size: array size for creation
 * @c: To init array with this char
 *
 * Return: Array pointer, NULL if size 0 or failed malloc
 */

char *create_array(unsigned int size, char c)

{
	char *arr;
	unsigned int a;

	if (size == 0)
	return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	return (NULL);

	for (a = 0; a < size; a++)
	arr[a] = c;

	return (arr);
}
