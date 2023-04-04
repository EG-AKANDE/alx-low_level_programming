#include "main.h"

/**
 * _strchr - Finds character in string
 * @s: To be searched.
 * @c: To be located.
 *
 * Return: With c found, pointer to first instance
 * of character in string s.
 * Else - NULL.
 */

char *_strchr(char *s, char c)

{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
