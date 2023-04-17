#include <stdio.h>

/**
 * main - prints the name of the file compiled from, then new line
 *
 * Return: 0 on success
 */

int main(void)

{
	fputs(__FILE__, stdout);
	putchar('\n');
	return (0);
}
