#include "main.h"
/**
 * _strcat - this is the funtion being defined
 * @dest: first character pointer
 * @src: second character pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}
