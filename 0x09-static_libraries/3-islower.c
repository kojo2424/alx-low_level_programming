#include "main.h"
/**
 * _islower - checks for lower character
 * @c: The character to be checked
 * Return: lowercase characters
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
