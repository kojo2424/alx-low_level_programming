#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: varible character
 */
void puts_half(char *str)
{
	int len = 0;
	int mid;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		mid = len / 2;
	}
	else
	{
		mid = (len + 1) / 2;
	}
	while (str[mid] != '\0')
	{
		_putchar(str[mid]);
		mid++;
	}
	_putchar('\n');
}
