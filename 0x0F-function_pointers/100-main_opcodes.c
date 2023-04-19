#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 for success, 1 for non-valid argc, 2 for negative byte
 */

int main(int argc, char **argv)

{
	int nbytes, i;
	char *addr;

	if (argc != 2)
{
	printf("Error\n");
	exit(1);
}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
{
	printf("Error\n");
	exit(2);
}

	addr = (char *)main;

	for (i = 0; i < nbytes; i++)
{
	printf("%02hhx", addr[i]);
	if (i != nbytes - 1)
	printf(" ");
}

	printf("\n");

	return (0);
}
