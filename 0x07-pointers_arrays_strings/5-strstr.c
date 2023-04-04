#include "main.h"

/**
 * _strstr - identifies first instance of needle
 * in haystack
 *
 * @haystack: string to seek
 *
 * @needle: substring to seek
 *
 * Return: beginning of the found substring,
 * NULL if substring not seen
 */

char *_strstr(char *haystack, char *needle)
{

unsigned int i, j;

	if (*needle == 0)
	return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
{
	if (haystack[i] == needle[0])
{
	for (j = 1; needle[j] != '\0'; j++)
{
	if (haystack[i + j] != needle[j])
	break;
}
	if (needle[j] == '\0')
	return (&haystack[i]);
}
}

	return (NULL);
}
