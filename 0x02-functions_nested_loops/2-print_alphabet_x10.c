#include "main.h"
/**
 * print_alphabet_x10 - this is a function
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

	_putchar('\n');
	i++;
	}
}
