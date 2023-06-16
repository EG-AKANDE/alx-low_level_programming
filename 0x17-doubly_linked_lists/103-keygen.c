#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generates pwd
 * @argc: arg count
 * @argv: argument vector
 *
 * Return: zero always
 */

int main(int __attribute__((__unused__)) argc, char *argv[])

{
	char password[7], *charset;
	int length = strlen(argv[1]), q, xor_result;

	charset = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	xor_result = (length ^ 59) & 63;
	password[0] = charset[xor_result];

	xor_result = 0;
	for (q = 0; q < length; q++)
	xor_result += argv[1][q];
	password[1] = charset[(xor_result ^ 79) & 63];

	xor_result = 1;
	for (q = 0; q < length; q++)
	xor_result *= argv[1][q];
	password[2] = charset[(xor_result ^ 85) & 63];

	xor_result = 0;
	for (q = 0; q < length; q++)
	if (argv[1][q] > xor_result)
	xor_result = argv[1][q];
	srand(xor_result ^ 14);
	password[3] = charset[rand() & 63];

	xor_result = 0;
	for (q = 0; q < length; q++)
	xor_result += (argv[1][q] * argv[1][q]);
	password[4] = charset[(xor_result ^ 239) & 63];

	for (q = 0; q < argv[1][0]; q++)
	xor_result = rand();
	password[5] = charset[(xor_result ^ 229) & 63];

	password[6] = '\0';
	fwrite(password, sizeof(char), strlen(password), stdout);
	return (0);
}
