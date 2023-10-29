#include "main.h"
/**
 * _abs - cal absolute value
 * @n: the integer
 * Return: Absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * - 1;
		return (abs_val);
	}
	return (n);
}
