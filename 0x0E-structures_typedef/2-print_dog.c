#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog pntr for printing
 *
 * Return: name nil if null name
 */

void print_dog(struct dog *d)

{
	if (d == NULL)
	return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
