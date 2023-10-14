#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	int m, d, c;

	if (n < 0)
	{
		_putchar('_');
		n = -n;
	}
	m = 1;
	c = 0;
	while (n / m > 9)
	{
		m = m * 10;
		c++;
	}
	while (c >= 0)
	{
		d = n / m;
		_putchar(d + '0');
		n = n % m;
		m = m / 10;
		c--;
	}
}
