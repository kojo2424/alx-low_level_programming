#include "main.h"
/**
 * _strncat - this is the function for performing concatenation
 * @src: second pointer character
 * @dest: first pointer character
 * @n: an integer
 * Return: start
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (start);
}
