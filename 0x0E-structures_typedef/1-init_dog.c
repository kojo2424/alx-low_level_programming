#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - this is a functional structure
 * @d: character
 * @name: name of th edog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
