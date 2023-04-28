#include <stdio.h>

void __attribute__((constructor)) tortoise_quote(void);

/**
 * tortoise_quote - prints a mesg before main function called
 *
 * Return: void
 */

void tortoise_quote(void)

{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
