#include <stdio.h>
#include <math.h>
/**
 * is_prime - is the function
 * @n: This is the unknown number
 * Return: 1 or 0
 */

int is_prime(long n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	for (long i = 5; i * i <= n; i + 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}
	return (0);
}
