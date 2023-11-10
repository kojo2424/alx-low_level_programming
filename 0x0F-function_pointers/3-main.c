#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * main - ..
 * @argc: ..
 * @argv: ...
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		_putchar("Error\n");
		exit(98);
	}
	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		_putchar("Error\n");
		exit(99);
	}
	_putchar("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
