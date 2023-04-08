#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds the positive nums
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for no error, 1 for errors
 */

int main(int argc, char *argv[])

{
	int a, sum = 0;

	if (argc < 2)
{
	printf("0\n");
	return (0);
}

	for (a = 1; a < argc; a++)
{
	int b = 0;

	while (argv[a][b] != '\0')
{
	if (argv[a][b] < '0' || argv[a][b] > '9')
{
	printf("Error\n");
	return (1);
}
	b++;
}
	sum += atoi(argv[a]);
}

	printf("%d\n", sum);
	return (0);
}
