#include "dog.h"
#include <stddef.h>

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: uninitialized dog struct pointer
 * @name: dog name str pointer
 * @age: dog age float
 * @owner: dog's owner name str pntr
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
