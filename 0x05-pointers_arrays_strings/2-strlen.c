#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: pointer to a string
 *
 * Return: Length of string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
