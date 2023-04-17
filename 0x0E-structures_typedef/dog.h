#ifndef DOG_H
#define DOG_H

#include <string.h>

/**
 * struct dog -  new type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

typedef struct dog

{
	char *name;
	float age;
	char *owner;
} dog_t;

void print_dog(struct dog *d);
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);

#endif
