#include <stdlib.h>

/**
 * argstostr - conc all args of program
 * @ac: int num of args
 * @av: strs symbolizing args
 *
 * Return: pntr to new str, NULL on fail
 */

char *argstostr(int ac, char **av)

{
	char *str;
	int a, b, length, abs_length;

	/* take on edge */
	if (ac == 0 || av == NULL)
	return (NULL);

	/* Calc str length */
	abs_length = 0;
	for (a = 0; a < ac; a++)
{
	length = 0;
	while (av[a][length] != '\0')
	length++;
	/* 1 added for '\n' */
	abs_length += length + 1;
}

	/* apportion new str mem */
	str = malloc(abs_length * sizeof(char));
	if (str == NULL)
	return (NULL);

	/* duplicate strs into new mem */
	b = 0;
	for (a = 0; a < ac; a++)
{
	length = 0;
	while (av[a][length] != '\0')
{
	str[b] = av[a][length];
	b++;
	length++;
}
	str[b] = '\n';
	b++;
}
	str[b] = '\0';

	return (str);
}
