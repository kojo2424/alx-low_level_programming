#include "main.h"
/**
 * _memset - is the function to perform a task
 * @s: first character
 * @b: second character
 * @n: third character
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
	{
		*p = b;
		p++;
	}
	return (s);
}
