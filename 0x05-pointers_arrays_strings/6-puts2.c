#include "main.h"
/**
 * puts2 - function to print every other character
 * @str: parameter of current character
 * Return: prints
 */
void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (n = 0; n <= t; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
