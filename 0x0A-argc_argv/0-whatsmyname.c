#include <stdio.h>

/**
 * main - this prints program name
 * @argc: count of arguments passed to program
 * @argv: series argument pointers
 *
 * Return: zero always
 */

int main(int argc, char *argv[])

{
	(void)argc; /* this is unused parameter */

	printf("%s\n", argv[0]);

	return (0);
}
