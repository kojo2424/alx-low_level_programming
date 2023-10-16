#include <stdio.h>
#include "main.h"
/**
 * print_array - function created
 * @a: first parameter
 * @n: second parameter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
