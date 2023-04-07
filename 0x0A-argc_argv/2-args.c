#include <stdio.h>

/**
 * main - prints every arguments
 * @argc: cmd arguments count
 * @argv: series of string pointers housing arguments
 *
 * Return: zero always
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}

	return (0);
}
