#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - word count
 * @str: string *
 * Return: number of str's words
 */

int count_words(char *str)

{
	int total = 0;

	while (*str)
{
	if (*str == ' ')
	str++;
	else
	{
	total++;
	while (*str && *str != ' ')
	str++;
}
}

	return (total);
}

/**
 * strtow - divide str to words
 * @str: string for halving
 *
 * Return: strs array, NULL for failure
 */

char **strtow(char *str)

{
	int a, b, length, strings_count = 0;
	char **words;

	if (str == NULL || *str == '\0')
	return (NULL);

	strings_count = count_words(str);

	words = malloc(sizeof(char *) * (strings_count + 1));

	if (words == NULL)
	return (NULL);

	for (a = 0; a < strings_count; a++)
{
	while (*str == ' ')
	str++;

	length = 0;

	while (*(str + length) != ' ' && *(str + length) != '\0')
	length++;

	words[a] = malloc(sizeof(char) * (length + 1));

	if (words[a] == NULL)
{
	for (b = 0; b < a; b++)
	free(words[b]);

	free(words);

	return (NULL);
}

	for (b = 0; b < length; b++)
	words[a][b] = *(str++);

	words[a][b] = '\0';
}

	words[a] = NULL;

	return (words);
}
