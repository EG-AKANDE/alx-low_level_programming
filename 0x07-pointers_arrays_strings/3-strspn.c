#include "main.h"

/**
 * _strspn - length of a prefix substring.
 *
 * @s: segment of s
 *
 * @accept: location of bytes
 *
 * Return: Number of bytes in the initial segment of s which consist only of
 * bytes from accept.
 *
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int i, j;
	unsigned int n = 0;

	for (i = 0; s[i]; i++)
		{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}

	return (n);
}
