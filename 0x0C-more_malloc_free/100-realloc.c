#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with malloc
 * @old_size: the size, in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the memory block
 * Return: a pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_ptr;
	unsigned int i, min;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);

	if (p == NULL)
		return (NULL);
	old_ptr = (char *)ptr;

	min = old_size < new_size ? old_size : new_size;

	for (i = 0; i < min; i++)
		p[i] = old_ptr[i];
	free(ptr);
	return (p);
}
