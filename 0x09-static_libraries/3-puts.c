#include "main.h"
/**
 * _puts - function that takes pointer and prints string followed by a new line
 * @str: char paramter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
