#include "main.h"

/**
 * is_palindrome - checks string for palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = 0;
	char *end;

	while (*s != '\0')
{
	s++;
	len++;
}
	end = s - 1;
	while (s < end)
{
	if (*s != *end)
{
	return (0);
}
	s++;
	end--;
}
	return (1);
}
