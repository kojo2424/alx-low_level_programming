#include "main.h"
/**
 * print_rev - funnction that prints strings in reverse
 * @s: parameter of the data type
*/
void print_rev(char *s)
{
	int lett = 0;

	while (s[lett] != '\0')
	{
		lett++;
	}
	lett--;

	while (lett >= 0)
	{
		_putchar(s[lett]);
		lett--;
	}
	_putchar('\n');
}
