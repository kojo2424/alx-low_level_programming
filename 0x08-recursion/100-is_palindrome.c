#include "main.h"
#include <string.h>
/**
 * is_palindrome - a recursive function that checks strings
 * @s: the string to be checked
 * Return: strings
 */
int is_palindrome(char *s)
{
	if (strlen(s) <= 1)
	{
		return (1);
	}
	else if (s[0] != s[strlen(s) - 1])
	{
		return (0);
	}
	else
	{
		s[strlen(s) - 1] = '\0';
		return (is_palindrome(s + 1));
	}
}
