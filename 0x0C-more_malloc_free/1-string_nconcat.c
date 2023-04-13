#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: str 1
 * @s2: str 2
 * @n: max bytes, s2 to concat
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{

	unsigned int s1_length = 0, s2_length = 0, a, b;
	char *result;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[s1_length])
	s1_length++;

	while (s2[s2_length])
	s2_length++;

	if (n >= s2_length)
	n = s2_length;

	result = malloc(sizeof(char) * (s1_length + n + 1));

	if (result == NULL)
	return (NULL);

	for (a = 0; a < s1_length; a++)
	result[a] = s1[a];

	for (b = 0; b < n; b++)
	result[a + b] = s2[b];

	result[a + b] = '\0';

	return (result);
}
