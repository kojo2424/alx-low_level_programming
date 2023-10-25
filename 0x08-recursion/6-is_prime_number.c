#include "main.h"
#include <stdio.h>
/**
 * helper - function that checkes if the num is divisible
 * @n: number to find the prime number
 * @i: another to b divide
 * Return: prime number
 */
int helper(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (helper(n, i + 1));
}
/**
 * is_prime_number - a function that returns a prime number
 * @n: a number or integer
 * Return: a number of prime
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (helper(n, 2));
}
