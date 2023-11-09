#include "function_pointers.h"
/**
 * int_index - function for index
 * @array: an array parameter
 * @size: the size of array
 * @cmp: other parameter
 * Return: i and -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}

