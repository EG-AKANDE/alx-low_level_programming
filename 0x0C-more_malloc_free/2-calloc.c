#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: elements num of array
 * @size: bytes sizes in each
 *
 * Return: allocated memory pntr, NULL upon failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	void *pntr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	pntr = malloc(nmemb * size);

	if (pntr == NULL)
	return (NULL);

	/* fix mem at 0 */
	memset(pntr, 0, nmemb * size);

	return (pntr);
}
