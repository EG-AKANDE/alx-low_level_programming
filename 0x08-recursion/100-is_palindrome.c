#include "main.h"

/**
 * is_palindrome_recursive - check string for palindrome
 * @s: string
 * @start: start string
 * @end: end of string
 *
 * Return: 1 if palindrome, 0 if else
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	return (1);
	if (*(s + start) != *(s + end))
	return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks string for palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 if else
 */

int is_palindrome(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	len++;
	return (is_palindrome_recursive(s, 0, len - 1));
}
