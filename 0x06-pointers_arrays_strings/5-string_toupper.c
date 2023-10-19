#include "main.h"
/**
 * string_toupper - function that convert low to upper case
 * @s: character
 * Return: start
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}
	return (start);
}
