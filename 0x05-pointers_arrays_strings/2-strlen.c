#include "main.h"
/**
 * _strlen - func that takes pointers and return string len
 * @s: the parameter to point to
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
