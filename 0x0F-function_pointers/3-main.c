#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry
 *
 * @argc: Argument count
 * @argv: Arguments verified
 *
 * Return: 98 and print error plus newline if wrong argc,
 * 99 and print error plus newline if operator unfound,
 * 100 then newline for division or mod by 0
 */

int main(int argc, char *argv[])

{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(num1, num2);

	printf("%d\n", result);

	return (0);
}
