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
	dog_t *new_dog;
	char *latest_name, *latest_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return (NULL);

	latest_name = malloc(sizeof(char) * (strlen(name) + 1));
	if (latest_name == NULL)
{
	free(new_dog);
	return (NULL);
}
	latest_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (latest_owner == NULL)
{
	free(latest_name);
	free(new_dog);
	return (NULL);
}

	strcpy(latest_name, name);
	strcpy(latest_owner, owner);

	new_dog->name = latest_name;
	new_dog->age = age;
	new_dog->owner = latest_owner;

	return (new_dog);
}
