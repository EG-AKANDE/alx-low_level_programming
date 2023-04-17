#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog.
 * @name: name of dog
 * @age: age
 * @owner: owner
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	return (NULL);

	d->name = strdup(name);
	if (d->name == NULL)
{
	free(d);
	return (NULL);
}
	d->owner = strdup(owner);
	if (d->owner == NULL)
{
	free(d->name);
	free(d);
	return (NULL);
}
	d->age = age;
	return (d);
}
