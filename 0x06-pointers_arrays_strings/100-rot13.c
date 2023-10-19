#include "main.h"
/**
 * rot13 - this is a funtion
 * @s: this a character
 * Return: star
 */
char *rot13(char *s)
{
	char *start = s;

	while (*s != '\0')
	{
		if (*s >= 'A' && *s <= 'Z')
		{
			*s = (*s - 'A' + 13) % 26 + 'A';
		}
		else if (*s >= 'a' && *s <= 'z')
		{
			*s = (*s - 'a' + 13) % 26 + 'a';
		}
		s++;
	}
	return (start);
}
