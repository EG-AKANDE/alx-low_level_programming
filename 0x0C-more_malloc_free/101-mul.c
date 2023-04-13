#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_valid_number - checks if str is valid num
 * @str: the string
 *
 * Return: error message, exit with non-zero status if failed
 */
int is_valid_number(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * multiply - multiplies two positive strs
 * @num1: first positive str
 * @num2: second positive str
 *
 * Return: array printed as str
 */
void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result = (int *)malloc(sizeof(int) * (len1 + len2));
	int start = 0;
	int i, j, carry, sum;

	memset(result, 0, sizeof(int) * (len1 + len2));

	for (i = len1 - 1; i >= 0; i--)
{
	carry = 0;
	for (j = len2 - 1; j >= 0; j--)
{
	sum = carry + (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1];
	result[i + j + 1] = sum % 10;
	carry = sum / 10;
}
	result[i + j + 1] = carry;
}

	while (start < len1 + len2 - 1 && result[start] == 0)
{
	start++;
	}

	for (i = start; i < len1 + len2; i++)
	{
	printf("%d", result[i]);
	}
	printf("\n");
	free(result);
}

/**
 * main - check num of args and valid args num
 * @argc: arg count
 * @argv: arg validity
 *
 * Return: printed error msg if checks fail, else mult
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}
