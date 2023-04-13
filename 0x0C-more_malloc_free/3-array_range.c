#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates int array
 * @min: min value
 * @max: max value
 *
 * Return: new array pntr, NULL for failure
 */

int *array_range(int min, int max)

{
	int *ar, a;

	if (min > max)
	return (NULL);

	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
	return (NULL);

	for (a = 0; a <= (max - min); a++)
	ar[a] = min + a;

	return (ar);
}
