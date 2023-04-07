#include <stdio.h>

/**
 * main - prints arguments count
 * @argc: total amt of cmd arguments
 * @argv: series housing cmd arguments
 *
 * Return: zero always
 */

int main(int argc, char *argv[])

{
	(void) argv; /* this is unused parameter */

	printf("%d\n", argc - 1);
	return (0);
}
