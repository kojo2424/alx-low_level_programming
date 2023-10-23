#include "main.h"
/**
 * _memcpy - This is a function that copies
 * @dest: a character of type char
 * @src: second character of char type
 * @n: a character of typer unsigned int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p = dest;
	char *q = src;

	for (i = 0; i < n; i++)
	{
		*p = *q;
		p++;
		q++;
	}
	return (dest);
}

