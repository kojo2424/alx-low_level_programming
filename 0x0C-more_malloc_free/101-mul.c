#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_number - checks if a string is a valid num
 * @s: the string to be check
 * Return: 1 if s is a number, 0 otherwise
 */
int is_number(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * mul - multiplies two positve numbers
 * @s1: the first number as a string
 * @s2: the second number as a string
 */
char *mul(char *s1, char *s2)
{
	int lent1, len2, lenr, i, j, carry, sum, prod;
	char r;

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	lenr = len1 + len2;
	r = malloc(sizeof(char) * (lenr + 1));

	if (r == NULL)
		return (NULL);

	for (i = 0; i < lenr; i++)
		r[i] = '0';
	r[lenr] = '\0';

	for (i = len1 - 1; i >= 0; 1--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			prod = (s1[i] - '0') * (s2[j] - '0');
			sum = prod + carry + (r[i + j + 1] - '0');

			r[i + j + 1] = (sum % 10) + '0';
			carry = sum / 10;
		}
		r[i + j + 1] += carry;
	}
	while (*r == 'o' && *(r + 1))
		r++;
	return (r);
}
/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: the arguments as strings
 * Return: o of successful, 98 otherwise
 */
int main(int argc, char **argv)
{
	char *s1, *s2, *r;

	if (argc != 3)
	{
		_putchar("Error\n");
		exit(98);
	}
	s1 = argv[1];
	s2 = argv[2];

	if (!is_number(s1) || !is_number(s2))
	{
		_putchar("Error\n");
		exit(98);
	}
	r = mul(s1, s2);

	_putchar("%s\n", r);

