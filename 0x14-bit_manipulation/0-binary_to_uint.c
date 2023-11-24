#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary num to unsigned int
 * @b: character to be converted
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numb = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		numb = numb * 2 + (b - '0');
		b++;
	}
	return numb;
}

