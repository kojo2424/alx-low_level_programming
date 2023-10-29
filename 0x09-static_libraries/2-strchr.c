#include "main.h"
#include <string.h>
/**
 *_strchr - The function
 * @s: 1st parameter
 * @c: 2nd parameter
 * Return: p or NULL
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}
	if (c == '\0')
	{
		return (p);
	}
	return (NULL);
}
