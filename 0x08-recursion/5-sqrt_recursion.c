#include "main.h"
#include <stdio.h>
/**
 * helper - help function
 * @i: a parameter
 * @n: a number
 * Return: number
 */
int helper(int n, int i)
{
	if (i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (helper(n, i + 1));
}
/**
 * _sqrt_recursion - Function
 * @n: number
 * Return: square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (helper(n, 1));
}

