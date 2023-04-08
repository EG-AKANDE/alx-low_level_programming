#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum coins to change for money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for no error, 1 for errors
 */

int main(int argc, char *argv[])

{
	int coins[] = {25, 10, 5, 2, 1};
	int together, num, count = 0;

	if (argc != 2)
{
	printf("Error\n");
	return (1);
}

	together = atoi(argv[1]);

	if (together < 0)
{
	printf("0\n");
	return (0);
}

	for (num = 0; num < 5; num++)
{
	count += together / coins[num];
	together %= coins[num];
}

	printf("%d\n", count);

	return (0);
}
