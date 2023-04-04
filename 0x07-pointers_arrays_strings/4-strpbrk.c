#include "main.h"

/**
 * _strpbrk - searches string for bytes.
 *
 * @s: the string intended for search.
 * @accept: the string with matching characters.
 *
 * Return: pointer to byte in s which matches a byte in accept,
 * NULL if byte not present.
 */

char *_strpbrk(char *s, char *accept)

{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
{
	if (s[i] == accept[j])
	return (&s[i]);
}
}

	return (NULL);
}
