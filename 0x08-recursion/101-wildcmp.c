#include "main.h"
/**
 * wildcmp - this a function
 * @s1: first variable
 * @s2: second variable
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		if (*s1 != '\0')
		{
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
		}
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}