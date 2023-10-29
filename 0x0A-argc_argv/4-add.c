#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - entry point
 * @argc: argurment count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, num, sum;

	char *arg;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		if (is_positive_number(arg))
		{
			num = atoi(arg);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
int is_positive_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
