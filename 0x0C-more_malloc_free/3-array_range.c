#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: the minimun value of the arry
 * @max: the maximum value of the array
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	p = malloc(sizeof(int) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = min + 1;

	return (p);
}
