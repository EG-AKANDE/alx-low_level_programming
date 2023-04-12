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
	int a, b, length = 0, abs_length = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	length++;

	/* plus 1 citing newline */
	abs_length += length + 1;
	length = 0;
}

	str = malloc(sizeof(char) * abs_length + 1);
	if (str == NULL)
	return (NULL);

	length = 0;
	for (a = 0; a < ac; a++)
{
	for (b = 0; av[a][b]; b++)
{
	str[length] = av[a][b];
	length++;
}
	/* recall newline char */
	str[length] = '\n';
	length++;
}
	str[length] = '\0';

	return (str);
}
