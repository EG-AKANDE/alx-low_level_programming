#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns pntr to new str
 * @str: str to copy
 *
 * Return: pntr to copied str, NULL if mem not enuff or NULL str
 */

char *_strdup(char *str)

{
	char *dup;
	unsigned int a, len = 0;

	if (str == NULL)
{
	return (NULL);
}

	/* find str length */
	while (str[len] != '\0')
{
	len++;
}

	/* apportion mem for dup */
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
{
	return (NULL);
}

	/* dup str into new mem loc */
	for (a = 0; a < len; a++)
{
	dup[a] = str[a];
}

	dup[a] = '\0';

	return (dup);
}
