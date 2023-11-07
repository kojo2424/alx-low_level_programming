#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function
 * @d: character
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: ");
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}
	printf("Age: %.6f\n", d->age);
	printf("owner: ");
	if (d->owner == NULL)
	{
		printf("(nil\n");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}
