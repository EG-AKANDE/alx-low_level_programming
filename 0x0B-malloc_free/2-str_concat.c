#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concat two strs
 * @s1: num one str
 * @s2: number two str
 *
 * Return: NULL for failed concat, else pntr to concat str
 */

char *str_concat(char *s1, char *s2)

{
	unsigned int len1 = 0, len2 = 0, a, b;
	char *str;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (*(s1 + len1))
	len1++;
	while (*(s2 + len2))
	len2++;

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
	return (NULL);

	for (a = 0; *(s1 + a); a++)
	*(str + a) = *(s1 + a);
	for (b = 0; *(s2 + b); b++)
	*(str + a + b) = *(s2 + b);
	*(str + a + b) = '\0';

	return (str);
}
